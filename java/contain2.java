import java.util.Scanner;
public class contain2 {
    static class Detail {
        public String name;
        public String contact_no;
        public String pan;
        public int age;

        Detail(String n, String c, String p, int a) {
            this.name = n;
            this.contact_no = c;
            this.pan = p;
            this.age = a;
        }

        public void to_check(String s) {
            if (pan.contains(s)) {
                System.out.println("\n\nName: " + name);
                System.out.println("contact number: " + contact_no);
                System.out.println("pan: " + pan);
                System.out.println("age:" + age);
            }

        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of people: ");
        int n = sc.nextInt();
        sc.nextLine();
        Detail[] d = new Detail[n];

        String name, contact_no, pan;
        int age;
        for (int i = 0; i < n; i++) {
            System.out.print("\nEnter Name: ");
            name = sc.nextLine();
            System.out.print("Enter contact number: ");
            contact_no = sc.nextLine();
            System.out.print("Enter pan card number: ");
            pan = sc.nextLine();
            System.out.print("Enter age: ");
            age = sc.nextInt();
            sc.nextLine();
            d[i] = new Detail(name, contact_no, pan, age);
        }
        String to_check = "ADL";
        for (Detail i : d) {
            i.to_check(to_check);
        }
        sc.close();
    }
}
