class ShoppingCart {
    private static final int MAX_ITEMS = 10;
    private Item[] items;
    private int itemCount;

    public ShoppingCart() {
        items = new Item[MAX_ITEMS];
        itemCount = 0;
    }

    public void addItem(Item item) {
        if (itemCount < MAX_ITEMS) {
            items[itemCount] = item;
            itemCount++;
        } else {
            System.out.println("cannot add more items. cart is full.");
        }
    }
 }

    public double calculate_total_price() {
        double totalPrice = 0;
        for (int i = 0; i < itemCount; i++) {
            totalPrice += items[i].getPrice();
        }
        return totalPrice;
    }

    public double cartTaxAmount(double taxRate) {
        double totalTax = 0;
        for (int i = 0; i < itemCount; i++) {
            if (items[i].isTaxable()) {
                totalTax += items[i].getPrice() * taxRate;
            }
        }
        return totalTax;
    }

   @Override
    public String toString() {
    String result = "shopping cart contents:\n";
    for (int i = 0; i < itemCount; i++) {
        result += items[i] + "\n";
    }
    return result;
}

}

