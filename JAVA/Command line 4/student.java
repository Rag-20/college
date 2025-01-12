public class student {
    public static void main(String[] args) {
        if(args.length!=4){
            throw new IllegalArgumentException("4 arguments needed");
        }
        int r_no=0;
        int sem=0;
        double cgpa=0.0;
        try{
            r_no=Integer.parseInt(args[0]);
        }catch(Exception e){
            System.out.println("Error: "+e.getClass().getSimpleName());
            System.exit(1);
        }

        try{
            sem=Integer.parseInt(args[2]);
        }catch(Exception e){
            System.out.println("Error: "+e.getClass().getSimpleName());
            System.exit(1);
        }

        try{
            cgpa=Double.parseDouble(args[3]);
        }catch(Exception e){
            System.out.println("Error: "+e.getClass().getSimpleName());
            System.exit(1);
        }

        System.out.println("Roll No. "+r_no);
        System.out.println("Name: "+args[1]);
        System.out.println("Semester: "+sem);
        System.out.println("CGPA "+cgpa);

    }
}