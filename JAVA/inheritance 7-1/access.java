
    class Base{
        public int a;
        protected int b;
        private int c;
    
        Base(){
            a=10;
            b=11;
            c=12;
        }
        int getter(){
            // this method return private variable
            return this.c;
        }
    }
    class Derived extends Base{
        void print(){
            System.out.println("a = "+this.a+" this is public variable in Base");
            System.out.println("b = "+this.b+" this is protected variable in Base");
            // cant print c bcz it is private
            //System.out.println("c = "+this.c+" this is protected variable in Base");
        }
    
        
     
    }
    
    public class access {
        public static void main(String[] args) {
            Derived n = new Derived();
            Base b = new Base();
            
            n.print();
            System.out.println(b.b);
            System.out.println(n.getter()+" this is private variable accessed by getter method.");
        }
        
    }

