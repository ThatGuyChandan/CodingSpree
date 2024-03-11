import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.math.BigInteger;
import java.net.Socket;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class ElGamalSignatureClient {
    public boolean verify(byte[] message, BigInteger r, BigInteger s) {
        BigInteger p = new BigInteger("1267650600228229401496703205376"
                + "1"); // replace with server's p
        BigInteger g = new BigInteger("3"); // replace with server's g
        BigInteger y = new BigInteger("7916219521126959617983717319540"
                + "500244728817774347173491261302903049485363399024241943" 
                + "054188087493505992864976621817984233161191535179"
                + "6077568122728823432771"); // replace with server's y

        try {
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            byte[] hashedMessage = md.digest(message);
            BigInteger hash = new BigInteger(1, hashedMessage);

            if (r.compareTo(BigInteger.ONE) < 0 || r.compareTo(p.subtract(BigInteger.ONE)) > 0) {
                return false;
            }

            if (s.compareTo(BigInteger.ONE) < 0 || s.compareTo(p.subtract(BigInteger.ONE)) > 0) {
                return false;
            }

            BigInteger w = s.modInverse(p.subtract(BigInteger.ONE));
            BigInteger u1 = hash.multiply(w).mod(p.subtract(BigInteger.ONE));
            BigInteger u2 = r.multiply(w).mod(p.subtract(BigInteger.ONE));
            BigInteger v = g.modPow(u1, p).multiply(y.modPow(u2, p)).mod(p).mod(p.subtract(BigInteger.ONE));

            return v.equals(r);
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static void main(String[] args) throws IOException {
        Socket socket = new Socket("localhost", 1234);
        DataInputStream in = new DataInputStream(socket.getInputStream());
        DataOutputStream out = new DataOutputStream(socket.getOutputStream());
        String message = "Hello, Server!";
        byte[] bytes = message.getBytes();
        out.writeInt(bytes.length);
        out.write(bytes);
        byte[] rBytes = new byte[in.readInt()];
        in.readFully(rBytes);
        byte[] sBytes = new byte[in.readInt()];
        in.readFully(sBytes);
        BigInteger r = new BigInteger(rBytes);
        BigInteger s = new BigInteger(sBytes);
        ElGamalSignatureClient client = new ElGamalSignatureClient();
        boolean verified = client.verify(bytes, r, s);
        if (verified) {
            System.out.println("The signature is valid.");
        } else {
            System.out.println("The signature is not valid.");
        }
    }
}

