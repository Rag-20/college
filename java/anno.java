class AnonymousClass{
    public void say(){
        System.out.println("say Hello");
    }
    public void bey(){
        System.out.println("say bye");
    }

}
public class anno {
    public static void main(String[] args) {
        AnonymousClass demo1 = new AnonymousClass(){
            @Override
            public void say(){
                System.out.println("Thank you");
            }
        };

        AnonymousClass demo2 = new AnonymousClass();
        demo1.say();
        demo2.say();
    
        
    }
}
