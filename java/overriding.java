class Animal {
    void show()
    {
        System.out.println("Animal makes noise");
    }
}
  
// Inherited class
class Dog extends Animal {
    // This method overrides show() of Parent
    @Override
    void show()
    {
        System.out.println("Dogs says bow vow");
    }
}
  
// Driver class
class overriding {
    public static void main(String[] args)
    {
       
        Animal obj1 = new Animal();// If a Parent type reference refers to a Parent object, then Animals show is called
        obj1.show();
  
        Animal obj2 = new Dog(); // If a Parent type reference refers to a Child object Dogs show() is called. 
        obj2.show();
    }
}