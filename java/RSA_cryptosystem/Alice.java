package RSA_cryptosystem;

import java.math.BigInteger;
import java.util.Scanner;

public class Alice {
    
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        BigInteger p = new BigInteger("127");
        BigInteger q = new BigInteger("131");
        
        BigInteger n = p.multiply(q);
        
        BigInteger phi = (p.subtract(BigInteger.ONE)).multiply(q.subtract(BigInteger.ONE));
        
        BigInteger e = new BigInteger("17");
        
        BigInteger d = e.modInverse(phi);
        
        System.out.println("Public key (n, e): (" + n + ", " + e + ")");
        
        System.out.println("Waiting to receive the encrypted message from Bob...");
        BigInteger encryptedMessage = scanner.nextBigInteger();
        
        BigInteger decryptedMessage = encryptedMessage.modPow(d, n);
        
        System.out.println("Decrypted message: " + decryptedMessage);
    }
}
