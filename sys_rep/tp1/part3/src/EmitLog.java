import com.rabbitmq.client.Channel;
import com.rabbitmq.client.Connection;
import com.rabbitmq.client.ConnectionFactory;
import org.apache.commons.lang3.SerializationUtils;

import java.util.Scanner;

public class EmitLog {

    private static final String EXCHANGE_NAME = "logs";
    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] argv) throws Exception {
        ConnectionFactory factory = new ConnectionFactory();
        factory.setHost("localhost");
        try (Connection connection = factory.newConnection();
             Channel channel = connection.createChannel()) {
            // we create an exchange that sends messages to all queues it is binded to
            // this is achieved by the fanout argument
            channel.exchangeDeclare(EXCHANGE_NAME, "fanout");

            String messageText = argv.length < 1 ? "Hello World!" :String.join(" ", argv);
            Message message=new Message(getInt(),messageText);
            byte[] data = SerializationUtils.serialize(message);

            channel.basicPublish(EXCHANGE_NAME, "", null, data);
            System.out.println(" [x] Sent '" + message + "'");
        }
    }
    private static int getInt(){
        System.out.println("enter the "+ "id" +":");
        return sc.nextInt();
    }


}
