public class Robot {
    private String name;
    private int yearBuilt;
    private static int robotCounter;
    double x1, x2, y1, y2;

    public Robot(String name, int yearBuilt) {
        this.name = name;
        this.yearBuilt = yearBuilt;
        robotCounter++;
    }

    public String getName() {
        return name;
    }

    public int getYearBuilt() {
        return yearBuilt;
    }

    public void setCoordinates(double x1, double x2, double y1, double y2) {
        this.x1 = x1;
        this.x2 = x2;
        this.y1 = y1;
        this.y2 = y2;
    }

    double calculateDistanceTraveled(int noOfMovements) {
        System.out.println("The overridden method");
        return 0;
    }

    void display() {
        System.out.println("Robot Name: " + this.name);
        System.out.println("Built Year: " + this.yearBuilt);
        System.out.println("This method, too, will be overridden by subclasses of robots.");
    }

    public static int getRobotCounter() {
        return robotCounter;
    }
}

