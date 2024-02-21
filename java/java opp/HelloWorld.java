import myPackage2.MyClass;

class HelloWorld {
    public static void main(String[] args) {
        System.out.println("i am fine ansdfgdfgdfsdfd you"); 
        MyClass myclass=new MyClass();
        myclass.print();
        Emp eng=new Emp("sandipon biswas",23343);
        Emp eng2=new Emp();
        eng2.setname("new name");
        eng2.setph(1231231231);
        System.out.println(eng2.getname());
        System.out.println(eng2.getph());

    }
}