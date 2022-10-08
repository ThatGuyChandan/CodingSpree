import java.util.Scanner;//import scanner class
public class reverse_string_using_recursion {
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a string");
String str1=sc.nextLine();//input a string
String str2="";//taking an empty string
for(int i=str1.length();i>=1;--i)//for loop is used for extracting each letter from end 
{
str2=str2+str1.charAt(i-1);//adding each letter from end to the beginning
}
System.out.println("Reversed string:"+ str2);//print the result

}
}
