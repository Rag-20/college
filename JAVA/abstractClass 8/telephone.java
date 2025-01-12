abstract class tele{
    abstract void lift();
    abstract void cut();
}

class smarttele extends tele{
    void lift(){
        System.out.println("Call picked up");
    }
    void cut(){
        System.out.println("Call disconnected!");
    }
}

class smarttele2 extends tele{
    void lift(){
        System.out.println("Call picked up 2");
    }
    void cut(){
        System.out.println("Call disconnected! 2");
    }
}
public class telephone {
    public static void main(String[] args) {
        tele t;
        t=new smarttele();
        t.lift();
        t.cut();

        t=new smarttele2();
        t.lift();
        t.cut();
    }
}
