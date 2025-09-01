import java.io.*;

public class DeSerializerPersonne {
    public static void main(String argv[]) {
        try {
            Personne perso;
            FileInputStream fi = new FileInputStream("gfg.txt");
            ObjectInputStream si = new ObjectInputStream(fi);
            perso = (Personne)si.readObject();

        } catch (java.io.IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
