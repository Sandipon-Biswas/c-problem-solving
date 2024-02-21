 class Emp {
    private int id=2;
    private int ph=2234;
    private String name="No name";
    private int salary=2;
    private int incentive=200;
    private void countSalary(){
        System.out.println(salary+incentive);
    }
    Emp(String name1,int ph1){
        name=name1;
        ph=ph1;
    }
    Emp(){
        name="vickey";
        ph=23434;
    }
    int getph(){
        return ph;
    }
    String getname(){
        return name;
    }
    void setph(int ph){
        this.ph=ph;
    }
    void setname(String name){
        this.name=name;
    }

}
