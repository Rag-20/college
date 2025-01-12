class Outer{
    private String msg = "outer class attribute"; 
    Outer(String m){
        msg = m;

    }
    Outer(){

    }
    class Inner{
        void display_msg(){
            System.out.println(msg);
        }
    }
}
public class innerclss {
    public static void main(String[] args) {
        Outer outer = new Outer("this is change");
        Outer.Inner inner1 = outer.new Inner();
        Outer.Inner inner2 = new Outer().new Inner();
        inner1.display_msg();
        inner2.display_msg();
        
    }
}
