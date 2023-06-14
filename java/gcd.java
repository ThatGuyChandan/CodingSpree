import java.util.*;
public class Main
{
    //factorial
    public void factorial(int a,int b,ArrayList<Integer> arr1,ArrayList<Integer> arr2){
        for(int i=1;i<=a;i++){
            if(a%i==0){
                arr1.add(i);
            }
        }
         for(int i=1;i<=b;i++){
            if(b%i==0){
                arr2.add(i);
            }
        }
        System.out.println("factors of a"+arr1);
        System.out.println("factors of b"+arr2);
    }
   //common factorials
   public void commonFactorial(ArrayList<Integer> arr1,ArrayList<Integer> arr2){
       arr1.retainAll(arr2);
       System.out.println("common factorials are:"+ arr1);
        System.out.println("greatest common divisor:"+ Collections.max(arr1));
   }
   // greatest factorial
	public static void main(String[] args) {
	    ArrayList<Integer> l1=new ArrayList<Integer>();
        ArrayList<Integer> l2=new ArrayList<Integer>();
		Main myObj=new Main();
		Scanner sc =new Scanner(System.in);
		System.out.println("enter value of a: ");
		int a=sc.nextInt();
		System.out.println("enter value of b: ");
		int b=sc.nextInt();
		myObj.factorial(a,b,l1,l2);
		myObj.commonFactorial(l1,l2);
	}
}
