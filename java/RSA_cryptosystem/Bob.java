package RSA_cryptosystem;
import java.math.BigInteger;
import java.util.Scanner;

public class Bob {
    
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);    
        
        System.out.println("Enter the value of n:");
        BigInteger n = scanner.nextBigInteger();
        System.out.println("Enter the value of e:");
        BigInteger e = scanner.nextBigInteger();
    
        System.out.println("Enter the message to be encrypted:");
        BigInteger message = scanner.nextBigInteger();
        
        BigInteger encryptedMessage = message.modPow(e, n);
        
        System.out.println("Encrypted message: " + encryptedMessage);
    }
}