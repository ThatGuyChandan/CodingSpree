import java.util.ArrayList;//importing arraylist
public class wrapper{
    public static void main(String[] args)
    {
        char ch = 'a';

        Character a = ch; // Autoboxing- primitive to Character object conversion
  
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
  
        arrayList.add(25);// Autoboxing because ArrayList stores only objects
      
       int num = arrayList.get(0); // unboxing because get method returns an Integer object
  
       System.out.println(num);// printing the values from primitive data types


    }
}