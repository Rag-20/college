public class add_sub {
    static void wrapper_op(){
        Integer i = 5;
        Integer j = 6;
        Double d = Double.valueOf(7);
        Double k = 6d;
        
        int a = i;
        int b = j;
        double c = d;
        double e = k;//unboxing

        int f = a+b;
        double g= c-e;

        Integer h = Integer.valueOf(f);
        Double l = Double.valueOf(g);
        
        System.out.println(h+" type "+h.getClass().getSimpleName());
        System.out.println(l+" type "+l.getClass().getSimpleName());



    }
    public static void main(String[] args) {
        wrapper_op();
        
    }
}
