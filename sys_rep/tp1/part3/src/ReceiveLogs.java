import com.rabbitmq.client.Channel;
import com.rabbitmq.client.Connection;
import com.rabbitmq.client.ConnectionFactory;
import com.rabbitmq.client.DeliverCallback;
import org.apache.commons.lang3.SerializationUtils;

import java.nio.charset.StandardCharsets;
import java.util.Scanner;

public class ReceiveLogs {
    private static final String EXCHANGE_NAME = "logs";
    private static final Scanner sc = new Scanner(System.in);
    private static int idToReceive;

    public static void main(String[] argv) throws Exception {
        idToReceive = getInt();

        ConnectionFactory factory = new ConnectionFactory();
        factory.setHost("localhost");
        Connection connection = factory.newConnection();
        Channel channel = connection.createChannel();

        //we create an exchange that sends messages to all queues it is binded to
        // this is achieved by the fanout argument
        channel.exchangeDeclare(EXCHANGE_NAME, "fanout");
        // creates a non-durable, exclusive, autodelete queue with a generated name
        String queueName = channel.queueDeclare().getQueue();

        channel.queueBind(queueName, EXCHANGE_NAME, "");

        System.out.println(" [*] Waiting for messages on queue " + queueName + " . To exit press CTRL+C");

        DeliverCallback deliverCallback = (consumerTag, delivery) -> {
            Message msg = SerializationUtils.deserialize(delivery.getBody());
            if (msg.id == idToReceive) {
                System.out.println(" [x] Received '" + msg + "'");
            }
        };
        channel.basicConsume(queueName, true, deliverCallback, consumerTag -> {
        });
    }

    private static int getInt() {
        System.out.println("enter the " + "id" + " you want to receive:");
        return sc.nextInt();
    }

}
