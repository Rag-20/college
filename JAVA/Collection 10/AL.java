import java.util.Scanner;
import java.util.ArrayList;

public class AL {
    public static void main(String[] args){
        try {
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter number of elements : ");
            int n=sc.nextInt();
            ArrayList<Integer> arrlist = new ArrayList<Integer>();
            // adding element to arrlist
            int data;
            for(int i=0;i<n;i++){
                System.out.print("Enter data : ");
                data=sc.nextInt();
                arrlist.add(Integer.valueOf(data));
            }
 
            // print arrlist
            System.out.println("ArrayList size : "+ arrlist.size());
            System.out.println("ArrayList : "+ arrlist);
         
            arrlist.forEach((x) -> System.out.print(x+" "));


            int search=1;
            if(arrlist.contains(Integer.valueOf(search))){
                int index=arrlist.indexOf(Integer.valueOf(search));
                System.out.println("\nFound 1 at index "+index);
            }else{
                System.out.println("\nnot found");
            }

            System.out.print("\nEnter index to enter :");
            int index=sc.nextInt();
            System.out.print("Enter data to be inserted :");
            data=sc.nextInt();
            if(index==arrlist.size()){
                arrlist.add(Integer.valueOf(data));
            }else{
                arrlist.add(index,Integer.valueOf(data));
            }
            System.out.println("ArrayList size : "+ arrlist.size());

            System.out.print("\nEnter index to delete :");
            index=sc.nextInt();
            arrlist.remove(index);
            System.out.println("ArrayList : "+ arrlist);
            System.out.println("ArrayList size : "+ arrlist.size());

            System.out.print("Enter data to be deleted :");
            data=sc.nextInt();
            arrlist.remove(Integer.valueOf(data));
            System.out.println("ArrayList : "+ arrlist);
            System.out.println("ArrayList size : "+ arrlist.size());

            sc.close();
        }
 
        catch (Exception e) {
            System.out.println("Exception thrown : " + e);
        }
    }
}
