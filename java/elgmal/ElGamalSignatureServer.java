import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.math.BigInteger;
import java.net.ServerSocket;
import java.net.Socket;
import java.security.SecureRandom;

public class ElGamalSignatureServer {
    private static final BigInteger ONE = BigInteger.ONE;
    private static final BigInteger TWO = BigInteger.TWO;

    private BigInteger p; 
    private BigInteger g; 
    private BigInteger x; 
    private BigInteger y; 
    private SecureRandom random;

    public ElGamalSignatureServer(int bitLength) {
        random = new SecureRandom();
        p = BigInteger.probablePrime(bitLength, random);
        g = BigInteger.valueOf(2); 
        x = new BigInteger(bitLength, random);
        y = g.modPow(x, p); 
    }

    public BigInteger[] sign(byte[] message) {
        BigInteger k;
        BigInteger r;
        BigInteger s;
        do {
            k = new BigInteger(p.bitLength() - 1, random);
            r = g.modPow(k, p);
            BigInteger hash = new BigInteger(1, message);
            s = k.modInverse(p.subtract(ONE)).multiply(hash.subtract(x.multiply(r))).mod(p.subtract(ONE));
        } while (r.equals(BigInteger.ZERO) || s.equals(BigInteger.ZERO));
        BigInteger[] signature = {r, s};
        return signature;
    }

    public boolean verify(byte[] message, BigInteger r, BigInteger s) {
        if (r.compareTo(ONE) < 0 || r.compareTo(p.subtract(ONE)) > 0) {
            return false;
        }
        if (s.compareTo(ONE) < 0 || s.compareTo(p.subtract(ONE)) > 0) {
            return false;
        }
        BigInteger hash = new BigInteger(1, message);
        BigInteger v1 = g.modPow(hash, p);
        BigInteger v2 = y.modPow(r, p).multiply(r.modPow(s, p)).mod(p);
        return v1.equals(v2);
    }

    public static void main(String[] args) throws IOException {
        int bitLength = 512;
        ElGamalSignatureServer server = new ElGamalSignatureServer(bitLength);
        ServerSocket serverSocket = new ServerSocket(1234);
        System.out.println("Server started.");
        while (true) {
            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected from " + clientSocket.getInetAddress().getHostAddress() + ":" + clientSocket.getPort());
            DataInputStream in = new DataInputStream(clientSocket.getInputStream());
            DataOutputStream out = new DataOutputStream(clientSocket.getOutputStream());
            byte[] bytes = new byte[in.readInt()];
            in.readFully(bytes);
            BigInteger r = new BigInteger(in.readInt(), in.readNBytes(in.readInt()));
            BigInteger s = new BigInteger(in.readInt(), in.readNBytes(in.readInt()));
            boolean verified = server.verify(bytes, r, s);
            out.writeBoolean(verified);
            clientSocket.close();
        }
    }
}
