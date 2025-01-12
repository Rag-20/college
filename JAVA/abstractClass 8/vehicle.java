
    abstract class Vehicl{
        abstract void drive();
    
        void honk(){
            System.out.println("piiip piip....");
        }
    }
    
    
    
    interface BasicVehicle{
        //  public static final .
        int tank = 2;
       
        default void pushBreak(){
            System.out.println("Breaks are pushed!!");
         }
        //public and abstract method by default.
        void stop();
        void start();
        // void stop(){
        //     System.out.println("hi");
        // }
        
        
    }
    
    class Car extends Vehicl implements BasicVehicle {
        public void drive(){
            System.out.println("Driving...");
        }
        public void stop(){
            System.out.println("Car is stop.");
        }
        public void start(){
            System.out.println("Car is started.");
        }
        void fuelUp(){
            System.out.println("Filling Up.");
        }
        void park(){
            System.out.println("Parking the car.");
        }
    
    }
    public class vehicle {
        public static void main(String args[]){
            Car car = new Car();
            car.fuelUp();
            car.start();
            car.drive();
            car.honk();
            car.pushBreak();
            car.stop();
            car.park();
        }
        
    }

