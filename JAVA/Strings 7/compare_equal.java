import java.util.Scanner;
public class compare_equal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String a = sc.nextLine();
        System.out.print("Enter string: ");
        String b = sc.nextLine();
        if(a.equals(b)){
            System.out.println("equal");
        }
        else{
            if(a.compareTo(b)>0){
                System.out.println("–“First String is greater.....considering case: "+a.compareTo(b));
            }else{
                System.out.println("–“Second String is greater.....considering case: "+a.compareTo(b));
            }
            
            if(a.compareToIgnoreCase(b)>0){
                System.out.println("First String is greater.....considering case: "+a.compareToIgnoreCase(b));
            }else if(a.compareToIgnoreCase(b)<0){
                System.out.println("Second String is greater.....considering case: "+a.compareToIgnoreCase(b));
            }else{
            System.out.println("Ignoring case: "+a.compareToIgnoreCase(b));
            }
        }
        sc.close();
    }
    
}
