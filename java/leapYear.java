import java.util.Scanner;
public class leapYear {
    public static void main(String args[]){
         // taking any random year
         int year;
 
         // Taking input from user using Scanner Class
         // scn is an object made of Scanner Class
         Scanner scn = new Scanner(System.in);
         System.out.print("Enter a year: ");
         year = scn.nextInt();
  
         // 1st condition check if it is century leap year
         // 2nd condition check if it is leap year and not
        
         if ((year % 400 == 0)
             || ((year % 4 == 0) && (year % 100 != 0))) {
            
             // if both conditions are true print leap year
             System.out.println(year + " is Leap Year");
         }
  
         else {
             // if any condition fails than print Non-leap year
             System.out.println(year + " is Non-Leap Year");
         }
    }
}
