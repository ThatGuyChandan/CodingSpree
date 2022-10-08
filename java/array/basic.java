import java.util.ArrayList; // import the ArrayList class

public class basic {
  public static void main(String[] args) {
    ArrayList<String> fruits = new ArrayList<String>();// Create an ArrayList object
    fruits.add("apple");// add function will help us to add values in array
    fruits.add("mango");
    fruits.add("grapes");
    fruits.add("kiwi");
    System.out.println(fruits);
    System.out.println(fruits.get(2)); //get() function will help us to access index 
  }
}

