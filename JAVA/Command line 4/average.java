public class average {
    public static void main(String[] args) {
        if(args.length!=5){
            throw new IllegalArgumentException("1 argument needed");
        }
        int [] avg=new int[5];
        int i=0;
        
            try{
                avg[i]=Integer.parseInt(args[i]);
                i++;
            }catch(Exception e){
                System.out.println("Error: "+e.getClass().getSimpleName());
            }
        
        int av=0;
        for(int k:avg){
            av+=k;
        }
        System.out.println("Average : "+av/5);
    }
}
