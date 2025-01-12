import java.util.InputMismatchException;
import java.util.Scanner;
public class custmException {
    class InsufficientFundsException extends Exception {
        
        public InsufficientFundsException() {
            super();
        }
     }
     class IllegalDeposit extends Exception {
        public IllegalDeposit(){
            super();
        }
     }

   
        private double balance;

        void openAcc(Scanner sc){
            while(true){
                try{
                    System.out.print("Enter balance :");
                    balance=sc.nextDouble();
                    System.out.println("Account opened succesfully");
                    break;
                }catch(InputMismatchException e){
                    System.out.println("Amount is not a number!");
                    sc.next();
                }
            }
            
        }

        void withdraw(Scanner sc){
            double withdraw;
            while(true){
                try{
                    System.out.print("Enter amount to withdraw :");
                    withdraw=sc.nextDouble();
                    break;
                }catch(InputMismatchException e){
                    System.out.println("Amount is not a number!");
                    sc.next();
                }
            }

            try{
                if(balance-withdraw<2000){
                    throw new InsufficientFundsException();
                }
                else{
                    balance=balance-withdraw;
                    System.out.println("withdraw Successufull");
                }
            }catch(InsufficientFundsException e){
                System.out.println("CAnnot withdraw!! Minimum balance error!");
            }
            
        }

        void deposit(Scanner sc){
            double depo;
            while(true){
                try{
                    System.out.print("Enter amount to deposit :");
                    depo=sc.nextDouble();
                    break;
                }catch(InputMismatchException e){
                    System.out.println("Amount is not a number!");
                    sc.next();
                }
            }

            try{
                if(depo>7000){
                    throw new IllegalDeposit();
                }
                else{
                    balance=balance+depo;
                    System.out.println("Deposit Successfull");
                }
            }catch(IllegalDeposit e){
                System.out.println("High amount! Caution!");
            }
            
        }
    

    public static void main(String[] args) {
        custmException cE=new custmException();
        Scanner sc=new Scanner(System.in);
        cE.openAcc(sc);
        cE.withdraw(sc);
        cE.deposit(sc);
        cE.withdraw(sc);
        sc.close();
    }
}


