import javax.crypto.KeyAgreement;
import java.io.*;
import java.net.Socket;
import java.security.*;

public class client {
    private static final String SERVER_IP = "localhost";
    private static final int SERVER_PORT = 12345;

    public static void main(String[] args) throws Exception {
        Socket socket = new Socket(SERVER_IP, SERVER_PORT);
        System.out.println("Connected to server");

        ObjectInputStream inputStream = new ObjectInputStream(socket.getInputStream());
        PublicKey serverPublicKey = (PublicKey) inputStream.readObject();

        KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("DiffieHellman");
        KeyPair clientKeyPair = keyPairGenerator.generateKeyPair();

        ObjectOutputStream outputStream = new ObjectOutputStream(socket.getOutputStream());
        outputStream.writeObject(clientKeyPair.getPublic());

        KeyAgreement keyAgreement = KeyAgreement.getInstance("DiffieHellman");
        keyAgreement.init(clientKeyPair.getPrivate());
        keyAgreement.doPhase(serverPublicKey, true);
        byte[] sharedSecret = keyAgreement.generateSecret();
        System.out.println("Shared secret: " + bytesToHex(sharedSecret));

        outputStream.close();
        inputStream.close();
        socket.close();
    }

    private static String bytesToHex(byte[] bytes) {
        StringBuilder hexString = new StringBuilder();
        for (byte b : bytes) {
            String hex = Integer.toHexString(0xFF & b);
            if (hex.length() == 1) {
                hexString.append('0');
            }
            hexString.append(hex);
        }
        return hexString.toString();
    }
}