import java.util.*;

class banking{
    double balance;
    int id;
    String name;
    banking(){}
}




public class Bank{
    static void withdraw(banking []b,int n,int cus_id,double amount){
        for(banking x:b){
            int l=0;
            if(x.id==cus_id){
                if(x.balance-amount>0){
                    x.balance-=amount;
                    System.out.println("Amount withdrawn");
                    return;
                }else{
                    System.out.println("insufficient funds");
                    return;
                }
            }
            l++;
            if(l==n-1){
                System.out.println("Cus ID is not valid");
            }
        }
    }
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        
        banking [] b=new banking[n];

        for(int i=0;i<n;i++){
            b[i]=new banking();
            System.out.print("Enter id : ");
            b[i].id=sc.nextInt();
            sc.nextLine();
            System.out.print("Enter name : ");
            b[i].name=sc.nextLine();
            
            System.out.print("Enter initial deposit balance : ");
            b[i].balance=sc.nextDouble();
        }

        withdraw(b,n,1,10);
    }
}

