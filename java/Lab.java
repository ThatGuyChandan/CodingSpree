class Lab//defining a class
{
     int plusMethod(int x, int y) {//instance method.
    return x + y;
  }
  //Instead of defining two methods that should do the same thing we are overloading one method.
   double plusMethod(double x, double y) {//instance method.
    return x + y;
  }
}
 class Lab2 extends Lab {
  public static void main(String[] args) {
      Lab obj=new Lab();//making object
    System.out.println (obj.plusMethod(1, 2));//accessing and printing the obj with defined method.
    System.out.println (obj.plusMethod(1.0, 2.5));

  }
}