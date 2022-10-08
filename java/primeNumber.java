import java.util.Scanner;
public class primeNumber {
    public static void main(String[] args)
   {
      int num, i,count=0;
      // Taking input from user using Scanner Class
   // scn is an object made of Scanner Class
      Scanner s = new Scanner(System.in);
      System.out.print("Enter a Number: ");
      num = s.nextInt();//input the number
      for(i=2; i<num; i++)//for loop is used for checking the divisibility
      {
         if(num%i == 0)//checking divisibility
         {
            count++;
            break;
         }
      }
     
      if(count==0)//if count is 0 then it is prime number
         System.out.println("\nIt is a Prime Number.");
      else//if count is not 0 then it is not prime number
         System.out.println("\nIt is not a Prime Number.");
    }
       }
