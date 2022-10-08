// A Class that represents use-defined exception
class MyException extends Exception {
    public MyException(String s)
    {
        // Call constructor of parent Exception
        super(s);
    }
}
public class UserDefinedExceptionHandling {
     // Driver Program
     public static void main(String args[])
     {
         try {
             // Throw an object of user defined exception
             throw new MyException("throw");
         }
         catch (MyException ex) {
             System.out.println("garbage");
  
             // Print the message from MyException object
             System.out.println(ex.getMessage());
         }
     }
}
