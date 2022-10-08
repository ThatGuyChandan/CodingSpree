public class phone{
String width,height,OS,brand,price;

public  void call(){
    System.out.println("call");
}
public void sendMessage(){
    System.out.println("send message");
}
public void browser(){
    System.out.println("browser");
}
public void share(){
    System.out.println("share");
}
public static void main(String[]args){
phone samsungGlaxy=new phone();
samsungGlaxy.width="6.98 cms";
samsungGlaxy.height="13.6 cms";
samsungGlaxy.OS="android";
samsungGlaxy.brand="Samsung";
samsungGlaxy.price="1000$";
System.out.println("\ndetail of samsung galaxy:");
System.out.println("Width - "+samsungGlaxy.width);
System.out.println("Height - "+samsungGlaxy.height);
System.out.println("OS - "+samsungGlaxy.OS);
System.out.println("Brand - "+samsungGlaxy.brand);
System.out.println("Price - "+samsungGlaxy.price);
samsungGlaxy.call();
samsungGlaxy.sendMessage();
samsungGlaxy.browser();
samsungGlaxy.share();


phone iPhone=new phone();
iPhone.width="5.86 cms";
iPhone.height="12.3 cms";
iPhone.OS="iOS";
iPhone.brand="Apple";
iPhone.price="1200$";
System.out.println("\ndetail of iPhone:");
System.out.println("Width - "+iPhone.width);
System.out.println("Height - "+iPhone.height);
System.out.println("OS - "+iPhone.OS);
System.out.println("Brand - "+iPhone.brand);
System.out.println("Price - "+iPhone.price);
iPhone.call();
iPhone.sendMessage();
iPhone.browser();
iPhone.share();


}
}