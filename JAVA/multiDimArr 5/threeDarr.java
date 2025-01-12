import java.util.*;
public class threeDarr {
    static void display(int[][][] a,int n){
        int i,j,k;
        for (i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    System.out.print(a[i][j][k]+", ");   
                }
                System.out.println("\n");
            }
        }

    }
    static void accept(Scanner sc){
        int[][][] m = new int[3][3][3];
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    m[i][j][k] = sc.nextInt();
                }
            }
        }
        display(m,3);

    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println();
        accept(sc);
        sc.close();
    }
}

