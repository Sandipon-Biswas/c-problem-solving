class Item {
    private String name;
    private double price;
    private double weight;
    private boolean taxable;

    public Item(String name, double price, double weight, boolean taxable) {
        this.name = name;
        this.price = price;
        this.weight = weight;
        this.taxable = taxable;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public double getWeight() {
        return weight;
    }

    public boolean isTaxable() {
        return taxable;
    }

    @Override
    public String toString() {
        return "Item: " + name + ", Price: " + price + ", Weight: " + weight + ", Taxable: " + taxable;
    }
}
