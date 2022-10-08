public class person {
    String hairColor,eyeColor,skinColor,height,weight;

public  void read(){
    System.out.println("read");
}
public void play(){
    System.out.println("play");
}
public void sleep(){
    System.out.println("sleep");
}
public void walk(){
    System.out.println("walk");
}
public static void main(String[]args){
person boy=new person();
boy.hairColor="black";
boy.eyeColor="black";
boy.skinColor="fair";
boy.height="5.10 inch";
boy.weight="65 Kg";
System.out.println("\ncharacterstic of boy:");
System.out.println("hair color - "+boy.hairColor);
System.out.println("eye color - "+boy.eyeColor);
System.out.println("skin Color - "+boy.skinColor);
System.out.println("height - "+boy.height);
System.out.println("weight - "+boy.weight);
boy.read();
boy.play();
boy.sleep();
boy.walk();


person girl=new person();
girl.hairColor="brown";
girl.eyeColor="brown";
girl.skinColor="milky white";
girl.height="5.4 inch";
girl.weight="50 Kg";
System.out.println("\ncharacterstic of girl:");
System.out.println("hair color - "+girl.hairColor);
System.out.println("eye color - "+girl.eyeColor);
System.out.println("skinColor - "+girl.skinColor);
System.out.println("height - "+girl.height);
System.out.println("weight - "+girl.weight);
girl.read();
girl.play();
girl.sleep();
girl.walk();


}
}
