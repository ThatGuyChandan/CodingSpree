import java.util.Scanner;

public class string {
public static void main(String[] args){
    Scanner s = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String str1 = s.nextLine();
    String str2=" thakur";
    System.out.println(str1.concat(str2));// it will add two strings and print the result.
    System.out.println(str1.length());//it will print the length of the input string.
    System.out.println(str1.toUpperCase()); //it will convert all lowercase letter in string to upercase letter.
    System.out.println(str1.toLowerCase()); //it will convert all uppercase letter in string to lowercase letter.
    System.out.println(str1.isEmpty());//it will check wether sting is empty or not.
    System.out.println(str1.charAt(0));//it will print the character at 0th index.
    System.out.println(str1.contains("ch"));//checks whether a string contains a sequence of characters.
    System.out.println(str1.endsWith("dan"));//Find out if the string ends with the specified characters.
    System.out.println(str1.equals(str2));// compares two strings and returns true if the strings are equal and false if not.
}    
}
