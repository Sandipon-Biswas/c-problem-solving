public class Father {
    public int a=203;
    public int b=23;
    public int c;
    String s="From father";
    void print(){
        System.out.println("From father");
    }
    public void add(){
        this.c=this.a +this.b;
        System.out.println(this.c);
    }
}
