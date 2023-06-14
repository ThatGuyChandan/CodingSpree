import javax.crypto.KeyAgreement;
import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.security.*;

public class server {
    private static final int PORT = 12345;

    public static void main(String[] args) throws Exception {
        ServerSocket serverSocket = new ServerSocket(PORT);
        System.out.println("Server listening on port " + PORT);

        Socket clientSocket = serverSocket.accept();
        System.out.println("Client connected");

        KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("DiffieHellman");
        KeyPair serverKeyPair = keyPairGenerator.generateKeyPair();

        ObjectOutputStream outputStream = new ObjectOutputStream(clientSocket.getOutputStream());
        outputStream.writeObject(serverKeyPair.getPublic());

        ObjectInputStream inputStream = new ObjectInputStream(clientSocket.getInputStream());
        PublicKey clientPublicKey = (PublicKey) inputStream.readObject();

        KeyAgreement keyAgreement = KeyAgreement.getInstance("DiffieHellman");
        keyAgreement.init(serverKeyPair.getPrivate());
        keyAgreement.doPhase(clientPublicKey, true);
        byte[] sharedSecret = keyAgreement.generateSecret();
        System.out.println("Shared secret: " + bytesToHex(sharedSecret));

        outputStream.close();
        inputStream.close();
        clientSocket.close();
        serverSocket.close();
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