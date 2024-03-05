public class Son extends Father{
    Son(int a){
        int x=a;
        System.out.println(x);
    }
    public void add(){
        this.d=this.a-this.c;
        System.out.println(this.d);
    }
}
