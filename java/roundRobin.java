import java.util.Random;

public class Main {
    private static final Random rand = new Random();

    public static void main(String[] args) {
        String plaintext = "HELLOWORLD";
        String key = generateKey(plaintext.length());

        String ciphertext = encrypt(plaintext, key);
        System.out.println("Ciphertext: " + ciphertext);

        String decrypted = decrypt(ciphertext, key);
        System.out.println("Decrypted plaintext: " + decrypted);
        cryptanalysis(ciphertext, key.length());
    }

    public static String generateKey(int length) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < length; i++) {
            sb.append((char) (rand.nextInt(26) + 'A'));
        }
        return sb.toString();
    }

    public static String encrypt(String plaintext, String key) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < plaintext.length(); i++) {
            char c = (char) (((plaintext.charAt(i) - 'A') + (key.charAt(i) - 'A')) % 26 + 'A');
            sb.append(c);
        }
        return sb.toString();
    }

    public static String decrypt(String ciphertext, String key) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < ciphertext.length(); i++) {
            char c = (char) (((ciphertext.charAt(i) - 'A') - (key.charAt(i) - 'A') + 26) % 26 + 'A');
            sb.append(c);
        }
        return sb.toString();
    }
    public static void cryptanalysis(String ciphertext, int keyLength) {
    for (int i = 0; i < Math.pow(26, keyLength); i++) {
        String key = generateKey(keyLength);
        String decrypted = decrypt(ciphertext, key);
        if (decrypted.startsWith("HELLO")) {
            System.out.println("Found key: " + key);
            System.out.println("Decrypted plaintext: " + decrypted);
            return;
        }
    }
    System.out.println("Key not found.");
}
}