public class wrapp {
    static void unbox(Character a,Integer b, Boolean c, Double d){
        System.out.println("Inside unboxing function:-");
        char a1=a;
        int b1=b;
        boolean c1=c;
        double d1=d;
        System.out.println(a.getClass()+" converted to char "+a1);
        System.out.println(b.getClass()+" converted to integer "+b1);
        System.out.println(c.getClass()+" converted to boolean "+c1);
        System.out.println(d.getClass()+" converted to double "+d1);
    }

    static void autobox(Character a,Integer b, Boolean c, Double d){
        System.out.println("Inside autoboxing function:-");
        Character a1= Character.valueOf(a);
        Integer b1=Integer.valueOf(b);
        Boolean c1=Boolean.valueOf(c);
        Double d1=Double.valueOf(d);
        System.out.println(a1.getClass()+" converted to char ");
        System.out.println(b1.getClass()+" converted to integer ");
        System.out.println(c1.getClass()+" converted to boolean ");
        System.out.println(d1.getClass()+" converted to double ");
    }
public static void main(String[] args) {
    char c = 'A';
    int i = 5;
    double d = 5d;
    boolean b = true;

    // corresponding box wrapper class
    Character w_c = c;
    Integer w_i = i;
    Double w_d = d;
    Boolean w_b = b;
    
    unbox(w_c,w_i,w_b,w_d);
    autobox(c,i,b,d);
   
    // char c_2 = (Character) wrapper[0];
    // int  i_2 = (Integer) wrapper[1];
    // float f_2 = (Float) wrapper[2];
    // double d_2 = (Double) wrapper[3];
    // boolean b_2 = (Boolean) wrapper[4];

    // System.out.println(c_2);
    // System.out.println(i_2);
    // System.out.println(f_2);
    // System.out.println(d_2);
    // System.out.println(b_2);
 
  
}
}