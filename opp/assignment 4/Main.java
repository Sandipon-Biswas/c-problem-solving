


public class Main {
    public double calculateTotalWeight(Item[] items) {
        double total = 0.0;
        for (int i = 0; i < items.length; i++) {
            total += items[i].getWeight();
        }
        return total;
    }

    public Item itemWithHighestPrice(Item[] items) {
        Item temp = new Item("", 0, 0, false);
        double maxPrice = 0;
        for (int i = 0; i < items.length; i++) {
            if (items[i].getPrice() > maxPrice) {
                maxPrice = items[i].getPrice();
                temp = items[i];
            }
        }
        return temp;
    }

    public int taxableNumber(Item[] items) {
        int x = 0;
        for (int i = 0; i < items.length; i++) {
            if (items[i].isTaxable()) {
                x += 1;
            }
        }
        return x;
    }

    public static void main(String[] args) {
        Main runner = new Main();
        Item[] items = new Item[10];
        
        
      
        
        
        
        ShoppingCart cart = new ShoppingCart();
        
        DiscountedItem book = new DiscountedItem("Food",500,1.5,true,30.0);
        Item withoutDiscount = new Item("Seven up",1000,1,false);
        
        cart.addItem(book);
        cart.addItem(withoutDiscount);
        
        System.out.println(cart);
        System.out.println("total Price:"+cart.calculate_total_price());
        
        OnlineShoppingCart addShippingCarge = new OnlineShoppingCart(100.0f);
        cart.addItem(book);
        cart.addItem(withoutDiscount);

        System.out.println("total shipping charge add:"+addShippingCarge.calculate_total_price());
 
   
       
    }
}
