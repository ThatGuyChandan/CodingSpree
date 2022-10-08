import java.util.Scanner;
public class armstrongNumber {
    public static void main(String[] args)
    {
    int n,c=0,r,x;
    // Taking input from user using Scanner Class
   // scn is an object made of Scanner Class
    Scanner s = new Scanner(System.in);
      System.out.print("Enter a Number: ");
      n = s.nextInt();
      x=n;
    while(x>0){
     //while loop is used for finding sum of cube of each digit of input number
        r=x%10;
        c=c+(r*r*r);
        
        x=x/10;
        
        }
        if (n==c){
          //if sum of cube of each digit of number is equal to number itself than it is armstrong number
        System.out.println(n+" is armstrong number \n");
        }
        else{
          //if sum of cube of each digit of number is not equal to number itself than it is not armstrong number
        System.out.println(n+" is not armstrong number \n");

        }
}
}