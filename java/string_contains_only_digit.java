import java.util.Scanner;//import scanner class

public class string_contains_only_digit{
    public static void main(String[] args)
    {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a string");
    String str=sc.nextLine();//input a string
    int c=0;//initiating the count

    for(int i=0;i<str.length();i++)//for loop is used for checking each character
    {
    if(str.charAt(i)>='0' && str.charAt(i)<='9')//whether each character is digit or not
    {
    c=c+1;
    }
    }
    if(c==str.length())//check if number of digits in string is equal to  length of string 
    {
    System.out.println("string contain all digits");
    }
    else
    {
    System.out.println("string do not contain all digits");
    }
    }
}
