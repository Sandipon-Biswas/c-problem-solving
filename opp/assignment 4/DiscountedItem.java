class DiscountedItem extends Item{
    private double discountPercentage;
    
    public DiscountedItem(String name, double price, double weight, boolean taxable, double discountPercentage)
    {
        super(name,price,weight,taxable);
        this.discountPercentage = discountPercentage/100;
        
    }
    
    @Override
    public double getPrice(){
        return super.getPrice()-super.getPrice()*this.discountPercentage;
    }
    
}

