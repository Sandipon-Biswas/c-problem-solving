public class Main {
    public static void main(String[] args) {
        Product product1 = new Product("Notebook", "stationery shop", 80.0, 70.0, 5.0);
        product1.increaseCost();

        System.out.println("Product Name: " + product1.getName());
        System.out.println("Vendor: " + product1.getVendor());
        System.out.println("Weight: " + product1.getWeight());
        System.out.println("Profit: " + product1.calculateProfit());
        System.out.println("Updated Cost: " + product1.getCost());
    }

    static class Product {

        private String name;
        private String vendor;
        private double price;
        private double cost;
        private double weight;
        private boolean taxable;

        public Product() {
            this.name = "undefined";
            this.vendor = "unknown";
            this.price = 0.0;
            this.cost = 0.0;
            this.weight = 0.0;
            this.taxable = false;
        }

        public Product(String name, String vendor, double price, double cost, double weight, boolean taxable) {
            this.name = name;
            this.vendor = vendor;
            this.price = price;
            this.cost = cost;
            this.weight = weight;
            this.taxable = taxable;
        }

        public Product(String name, String vendor, double price, double cost, double weight) {
            this(name, vendor, price, cost, weight, false);
        }

        public String getName() {
            return name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public String getVendor() {
            return vendor;
        }

        public void setVendor(String vendor) {
            this.vendor = vendor;
        }

        public double getPrice() {
            return price;
        }

        public void setPrice(double price) {
            this.price = price;
        }

        public double getCost() {
            return cost;
        }

        public void setCost(double cost) {
            this.cost = cost;
        }

        public double getWeight() {
            return weight;
        }

        public void setWeight(double weight) {
            this.weight = weight;
        }

        public boolean isTaxable() {
            return taxable;
        }

        public void setTaxable(boolean taxable) {
            this.taxable = taxable;
        }

        public double calculateProfit() {
            return price - cost;
        }

        public void increaseCost() {
            double increasedCost = cost * 2.05;
            this.cost = increasedCost;
        }
    }
}