public class Son extends Father{
    String s ="From son";
    void print(){
        super.print();
        System.out.println("From son");
    }
    public void add(){
        this.c=this.a - this.b;
        System.out.println(this.c);
    }
}
