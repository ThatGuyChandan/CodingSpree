import java.util.Scanner;
public class mersenePrime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                int mersenne = (int) Math.pow(2, i) - 1;
                if (isPrime(mersenne)) {
                    System.out.println(mersenne + " is a Mersenne prime");
                } else {
                    System.out.println(mersenne + " is not a Mersenne prime");
                }
            }
        }
    }


    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}