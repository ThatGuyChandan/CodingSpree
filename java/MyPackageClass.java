package mypack;//creating my package
import java.util.Scanner;// Import the Scanner class
class MyPackageClass { 
  public static void main(String[] args) { 
    Scanner myObj = new Scanner(System.in);  // Create a Scanner object
    System.out.println("Enter your name");
    String userName = myObj.nextLine();  // Read user input
    System.out.println("your name is "+userName); //output
  } 
}

