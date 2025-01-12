import java.util.InputMismatchException;
import java.util.Scanner;

public class inputMismatchException {
    class InvalidAgeException extends Exception {
        public InvalidAgeException(){
            // Call constructor of parent Exception
            super();
        }
    }

    void acceptAge(Scanner sc){
        int age;
        while (true) {
            try{
                System.out.print("Enter age :");
                age=sc.nextInt();
                if(age>120 || age<0){
                    throw new InvalidAgeException();
                }
                System.out.println("Age validated!");
                break;
            }catch(InputMismatchException e){
                System.out.println("Not an integer ");
                sc.next();
            }catch(InvalidAgeException e){
                System.out.println("Age entered is out of range!");
            }
        }
        
    }

public static void main(String[] args) {
    inputMismatchException ime=new inputMismatchException();
    Scanner sc=new Scanner(System.in);
    ime.acceptAge(sc);
    sc.close();
}
}
