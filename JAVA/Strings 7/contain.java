import java.util.*;
public class contain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of string: ");
        int n = sc.nextInt();
        String[] arr = new String[n]; 
        String to_check = "ing";
        sc.nextLine();
        for (int i=0;i<n;i++){
            System.out.print("Enter string: ");
             arr[i] = sc.nextLine();
        }
        for (String s: arr){
            if(s.contains(to_check)){
                System.out.println(s+" contains "+to_check);
            }
        }
        sc.close();
    }
    
}