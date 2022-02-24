import com.rabbitmq.client.Channel;
import com.rabbitmq.client.Connection;
import com.rabbitmq.client.ConnectionFactory;
import com.rabbitmq.client.DeliverCallback;
import org.apache.commons.lang3.SerializationUtils;

import java.nio.charset.StandardCharsets;
import java.util.Objects;
import java.util.Scanner;

public class ReceiveLogs {
    private static final String EXCHANGE_NAME = "logs";
    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] argv) throws Exception {
        int myid = getInt("my id");
        int idToReceive = getInt("id you want to receive");

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
            if (msg.id == idToReceive)
                System.out.println(" [x] Received '" + msg + "'");
        };
        channel.basicConsume(queueName, true, deliverCallback, consumerTag -> {
        });

        while (true) {
            String messageText = getString("message");
            if (!Objects.equals(messageText, "")) {
                Message message = new Message(myid, messageText);
                byte[] data = SerializationUtils.serialize(message);
                channel.basicPublish(EXCHANGE_NAME, "", null, data);
                System.out.println(" [x] Sent '" + message + "'");
            }
        }


    }

    private static String getString(String type) {
        System.out.println("enter the " + type + ": ");
        if (sc.hasNext())
            return sc.nextLine();
        return "error";
    }

    private static int getInt(String type) {
        System.out.println("enter the " + type + ":");
        return sc.nextInt();
    }

}
