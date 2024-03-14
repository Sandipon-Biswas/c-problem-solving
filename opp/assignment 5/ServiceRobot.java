public class ServiceRobot extends Robot {
    private double batteryCapacity;
    private double chargingRate;

    public ServiceRobot(String name, Integer yearBuilt, double batteryCapacity, double chargingRate) {
        super(name, yearBuilt);
        this.batteryCapacity = batteryCapacity;
        this.chargingRate = chargingRate;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Battery capacity: " + batteryCapacity + " Ah with a charging rate of " + chargingRate);
    }

    @Override
    public double calculateDistanceTraveled(int noOfMovements) {
        double totalDistance = 0;
        for (int i = 0; i < noOfMovements; i++) {
            totalDistance += Math.abs(x1 - x2) + Math.abs(y1 - y2);
        }
        return Math.round(totalDistance);
    }

    public double calculateTimeToRecharge() {
        return Math.round(batteryCapacity / chargingRate);
    }
}
