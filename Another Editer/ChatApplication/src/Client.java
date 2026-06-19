import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.util.Scanner;

public class Client {
    public static void main(String[] args) throws IOException {
        System.out.println("Client Starting...");
        Socket socket = new Socket("127.0.0.1", 22222);
        System.out.println("Client Connected.....");
        ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());
        ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream());
        Scanner sc =new Scanner(System.in);
        String messege = sc.nextLine();
        oos.writeObject(messege);
        try {
            Object fromserver = ois.readObject();
            System.out.println("From server: " + (String) fromserver);
            

        }catch(ClassNotFoundException e){
            e.printStackTrace();
        }
    }
}
