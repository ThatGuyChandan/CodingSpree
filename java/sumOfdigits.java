import java.util.Scanner;
public class sumOfdigits {
    public static void main(String args[]){
     int n,sum=0;
     // Taking input from user using Scanner Class
    // scn is an object made of Scanner Class
     Scanner s = new Scanner(System.in);
       System.out.print("Enter a Number: ");
       n = s.nextInt();
while (n != 0){ 
    //while loop is used to find the sum of digits of input number 
    sum = sum + (n % 10);
    n = n/10;
}
//print the sum of digits of number
System.out.println("sum of the digits of the number:"+sum);
    }
}
