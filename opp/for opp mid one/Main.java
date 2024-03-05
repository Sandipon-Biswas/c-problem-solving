public class Main{
    public static void main(String[] args){
        System.out.println(Ins.a);
        MyClass class1 = new MyClass();
        class1.myf();
        Sum sum1=new Sum();
        
        Ins ins=new Ins();
        ins.add();
        Son son1 =new Son();
        son1.print();
        OverLoading over=new OverLoading();
        over.load(3, 7);
        over.load(3, 7);
        Constractor ccc=new Constractor();
        Constractor ccc1=new Constractor(1);
        son1.print();
    }
}