public class book {

//declaring class variables
String bookId;
String name;
int session ;
String AuthorName;
public book(String a,String b,int c,String d){
bookId=a;
name=b;
session=c;
AuthorName=d;
System.out.println("Book Id: "+bookId);
System.out.println("Name: "+name);
System.out.println("Session: "+session);
System.out.println("Author name: "+AuthorName);
}
public book(String e,int f,String g){
name=e;
session=f;
AuthorName=g;
System.out.println("Name: "+name);
System.out.println("Session: "+session);
System.out.println("Author name: "+AuthorName);
}
public static void main(String args[])
{
System.out.println("Book  with book id");
book Obj1=new book("21a","life of pie",2010,"unknown");

System.out.println("\nBook  without book id");
book obj2=new book("solo leveling",2015,"unknown");
}
}
