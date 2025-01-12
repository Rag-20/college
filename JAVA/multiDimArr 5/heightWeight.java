import java.util.Scanner;

public class heightWeight {
      public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        while(true){
            try{
                System.out.print("Enter total no. of sports people: ");
                n = sc.nextInt();
                break;
            }catch(Exception e){
               System.out.println("\nError :"+e.getClass().getSimpleName()+"\n");
               sc.next();
            }
        }
                int[][][] a= new int[n][1][2];
               
                for(int i=0;i<n;i++){
                    System.out.println("Entry "+(i+1)+": ");        
                    while(true){
                        try{
                    System.out.print("Person id : "); 
                    a[i][0][0] = sc.nextInt();
                    break;
                }catch(Exception e){
                   System.out.println("\nError :"+e.getClass().getSimpleName()+"\n");
                   sc.next();
                }
            }
            while(true){
                try{
                    System.out.print("Weight: "); 
                    a[i][0][0] = sc.nextInt();
                    break;
                }catch(Exception e){
                   System.out.println("\nError :"+e.getClass().getSimpleName()+"\n");
                   sc.next();
                }
            }
            while(true){
                try{
                    System.out.print("Height: "); 
                    a[i][0][1] = sc.nextInt();
                    
                 break;
             }catch(Exception e){
                System.out.println("\nError :"+e.getClass().getSimpleName()+"\n");
                sc.next();
             }
            }
        }
        int avg=0;        
        for (int j = 0; j < n; j++) {
            avg+=a[j][0][0];
        }
        System.out.println("Average weight : "+avg/n);

        avg=0;        
        for (int j = 0; j < n; j++) {
            avg+=a[j][0][1];
        }
        System.out.println("Average height : "+avg/n);
        sc.close();
        
    
}
}
