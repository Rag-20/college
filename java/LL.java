import java.util.Scanner;
import java.util.LinkedList;

public class LL {
    public static void main(String[] args){
        try {
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter number of elements : ");
            int n=sc.nextInt();
            LinkedList<Integer> llist = new LinkedList<Integer>();
            // adding element to arrlist
            int data;
            for(int i=0;i<n;i++){
                System.out.print("Enter data : ");
                data=sc.nextInt();
                llist.add(data);
            }
 
            // print arrlist
            System.out.println("LinkedList size : "+ llist.size());
            System.out.println("LinkedList : "+ llist);
          
           llist.forEach((x) -> System.out.print(x+" "));

           
           int search=1;
           if(llist.contains(Integer.valueOf(search))){
               int index=llist.indexOf(Integer.valueOf(search));
               System.out.println("\nFound 1 at index "+index);
           }else{
               System.out.println("\nnot found");
           }

           System.out.print("\nEnter index to enter :");
           int index=sc.nextInt();
           System.out.print("Enter data to be inserted :");
           data=sc.nextInt();
           if(index==llist.size()){
               llist.add(Integer.valueOf(data));
           }else{
              llist.add(index,Integer.valueOf(data));
           }
           System.out.println("ArrayList size : "+ llist.size());

           System.out.print("\nEnter index to delete :");
           index=sc.nextInt();
           llist.remove(index);
           System.out.println("ArrayList : "+ llist);
           System.out.println("ArrayList size : "+ llist.size());

           System.out.print("Enter data to be deleted :");
           data=sc.nextInt();
           llist.remove(Integer.valueOf(data));
           System.out.println("ArrayList : "+ llist);
           System.out.println("ArrayList size : "+ llist.size());

            sc.close();
        }
 
        catch (Exception e) {
            System.out.println("Exception thrown : " + e);
        }

    }
}
