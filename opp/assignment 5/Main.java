import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //  objects
        RacingBot ferrariBot = new RacingBot("FerrariBOT", 2016, 2.0, 2.0);
        ServiceRobot wallE = new ServiceRobot("WallE", 2009, 200.0, 2.4);

        // input  movement
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of movements ");
        int numOfMovements = scanner.nextInt();

        // coordinate
        ferrariBot.setCoordinates(7.0, 5.0, 3.0, 4.0);
        wallE.setCoordinates(9.0, 4.0, 3.0, 7.0);

        // RacingBot 
        double distanceTraveledRacingBot = ferrariBot.calculateDistanceTraveled(numOfMovements);
        System.out.println("Distance traveled by racingBot: " + distanceTraveledRacingBot);

        double accelerationRacingBot = ferrariBot.calculateAcceleration(10, numOfMovements);
        System.out.println("Acceleration of racingBot: " + accelerationRacingBot);

        ferrariBot.display();

        // ServiceRobot 
        double distanceTraveledServiceRobot = wallE.calculateDistanceTraveled(numOfMovements);
        System.out.println("Distance traveled by terviceRobot: " + distanceTraveledServiceRobot);

        double timeToRecharge = wallE.calculateTimeToRecharge();
        System.out.println("Taken time  recharge for serviceRobot: " + timeToRecharge);

        wallE.display();

        // Ptotal robot
        System.out.println("Count robot create: " + Robot.getRobotCounter());
    }
}
