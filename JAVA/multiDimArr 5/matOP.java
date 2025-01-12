import java.util.Scanner;

public class matOP {
    static int[][] addition(int[][] m1,int[][] m2){
        int r1 =m1.length, r2 = m2.length;
        int c1 =m1[0].length, c2 = m2[0].length;

        if (r1==r2 && c1 == c2){
            int[][] m3 = new int[r1][c1];
            for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++){
                // System.out.print("a["+i+"]["+j+"] = ");
                m3[i][j]  = m1[i][j] + m2[i][j] ;
            }
            return m3;
        }
        System.out.println("Addition not allowed\nrows and column not equal");
        return m1;

    }

    static int[][] subtraction(int[][] m1,int[][] m2){
        int r1 =m1.length, r2 = m2.length;
        int c1 =m1[0].length, c2 = m2[0].length;

        if (r1==r2 && c1 == c2){
            int[][] m3 = new int[r1][c1];
            for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++){
                // System.out.print("a["+i+"]["+j+"] = ");
                m3[i][j]  = m1[i][j] - m2[i][j] ;
            }
            return m3;
        }
        System.out.println("subtraction not allowed\nrows and column not equal");
        return m1;

    }
    static void display(int[][] m){
        for(int[] row:m){
            for (int elt: row){
                System.out.print(elt+" ");
            }
            System.out.println("");
        }

    }


    static int[][] accept_matrix(int r,int c){
        Scanner sc = new Scanner(System.in);
        int[][] a = new int[r][c];
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            System.out.print("a["+i+"]["+j+"] = ");
            a[i][j]  = sc.nextInt();
        }
        sc.close();
        return a;
    }
    static int[][] transpose(int[][] m){
        int c =m.length;
        int r =m[0].length; 
        int[][] t= new int[r][c];
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            int elt;
            elt = m[j][i];
            t[i][j]  = elt;
        }
        return t;
    }

    static int[][] multiplication(int[][] m1,int[][] m2){
        int r = m1.length,c = m2[0].length;
        int common = m1[0].length;
        int[][] m3 = new int[r][c];
        int k;
        for(k=0;k<r;k++)
        for(int i=0;i<c;i++){
            int elt =0;
            for(int j=0;j<common;j++){
                elt+=m1[k][j]*m2[j][i];
            }
            m3[k][i] = elt;
        }
        return m3;

    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Matrix 1:-");
        System.out.print("Enter rows: ");
        int r = sc.nextInt();
        System.out.print("Enter columns: ");
        int c = sc.nextInt();
        int[][] m1 = accept_matrix(r,c);
        //display(transpose(m1));
        

        System.out.println("Matrix 2:-");
        System.out.print("Enter rows: ");
        int r2 = sc.nextInt();
        System.out.print("Enter columns: ");
        int c2 = sc.nextInt();
        int[][] m2 = accept_matrix(r2,c2);
        
        // if (c == c2 && r == r2){
        // display(addition(m1, m2));
        // display(subtraction(m1, m2));
        // }
        // else{
        //     System.out.println("Addition and subtraction not allowed\nrows and column not equal");

        // }
        display(m1);
        display(m2);
        sc.close();
        if(c==r2)
        //multiplication(m1,m2);
        display(multiplication(m1,m2));
        else
        System.out.println("Multiplication is not allowed.\nCheck rows and column.");
    }
}
