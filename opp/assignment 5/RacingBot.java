public class RacingBot extends Robot {
    private double initialVelocity;
    private double distanceTravelTime;

    public RacingBot(String name, int yearBuilt, double initialVelocity, double distanceTravelTime) {
        super(name, yearBuilt);
        this.initialVelocity = initialVelocity;
        this.distanceTravelTime = distanceTravelTime;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("With an initial velocity of " + initialVelocity + " " + getName() + ", it took " +
                distanceTravelTime + " units of time to move.");
    }

    @Override
    public double calculateDistanceTraveled(int noOfMovements) {
        double totalDistance = 0;
        for (int i = 0; i < noOfMovements; i++) {
            totalDistance += Math.sqrt(Math.pow((x1 - x2), 2) + Math.pow((y1 - y2), 2));
        }
        return Math.round(totalDistance);
    }

    public double calculateAcceleration(double accelerationTime, int noOfMovements) {
        double finalVelocity = calculateDistanceTraveled(noOfMovements) / distanceTravelTime;
        return Math.round((finalVelocity - initialVelocity) / accelerationTime);
    }
}
