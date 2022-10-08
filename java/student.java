public class student {
    String name,className,city_belong_to;
    int rollNumber;
    public student(String n,int r,String cn,String cb ){
        name=n;
        rollNumber=r;
        className=cn;
        city_belong_to=cb;
    }
        public static void main(String[]args){

            student myObj=new student("chandan",21,"cse","shimla");
            System.out.println("Name: "+myObj.name);
            System.out.println("Roll Numbe: "+myObj.rollNumber);
            System.out.println("Class Name: "+myObj.className);
            System.out.println("City belongs to: "+myObj.city_belong_to);

        }
    
}
