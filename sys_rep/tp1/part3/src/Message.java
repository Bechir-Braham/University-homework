import java.io.Serializable;

public class Message implements Serializable {
    int id;
    String message;
    public Message(int id,String msg){
        this.id=id;
        this.message=msg;

    }

    @Override
    public String toString() {
        return "Message{" +
                "id=" + id +
                ", message='" + message + '\'' +
                '}';
    }
}
