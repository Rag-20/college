public class vote {
    public static void main(String[] args) {
        if(args.length!=1){
            throw new IllegalArgumentException("1 argument needed");
        }
        int age=0;
        try{
            age=Integer.parseInt(args[0]);
        }catch(Exception e){
            System.out.println("Error: "+e.getClass().getSimpleName());
            System.exit(1);
        }   

        if(age<0){
            System.out.println("Invalid age!!");
        }else if(age<18){
            System.out.println("Underage!!");
        }else{
            System.out.println("Valid!!");
        }
    }
}
