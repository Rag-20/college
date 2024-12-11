
public class trial{

    public static void main(String[] args) {
        String s=new String("String ");
        StringBuffer sb=new StringBuffer("String buffer ");
        StringBuilder sbu=new StringBuilder("string builder ");

        System.out.println(s+" "+s.hashCode());
        System.out.println(sb+" "+sb.hashCode());
        System.out.println(sbu+" "+sbu.hashCode());

        s=s+"new";
        sb.append("new");
        sbu.append("new");

        System.out.println(s+" "+s.hashCode());
        System.out.println(sb+" "+sb.hashCode());
        System.out.println(sbu+" "+sbu.hashCode());
    }
}