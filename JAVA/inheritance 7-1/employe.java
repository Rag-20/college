
import java.util.Scanner;

class  Employee{
    String name;
    int id;
    double salary;
    
    Employee(String name,int id,double salary){
        this.name = name;
        this.id = id;
        this.salary = salary;
       
    }
    void display(){
        System.out.println("Name:- "+name);
        System.out.println("Id:- "+id);
        System.out.println("Post:-Employee ");
       
        System.out.println("Salary:- "+salary);
    }
    void upgradeSalary(){
        this.salary = this.salary +this.salary*0.1;
    }

}
class Manager extends Employee{
    char grade;
    int number_of_projects;
   
    Manager(String name,int id,double salary,char grade,int no_of_projects){
        super(name,id,salary);
        this.grade = grade;
        this.number_of_projects = no_of_projects;
        
    }

    @Override
    void display(){
        System.out.println("Name:- "+name);
        System.out.println("Id:- "+id);
        System.out.println("Post:- Manager ");
        System.out.println("Number of projects:- "+number_of_projects);
        System.out.println("Grade:- "+grade);
        System.out.println("Salary:- "+salary);
    }
    @Override
    void upgradeSalary(){
        this.salary += this.salary*0.2;
    }

}
public class employe {
    public static void main(String[] args) {
        String name;
        int id;
        double salary;

        System.out.print("Enter number of employees: ");
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int i;
        sc.nextLine();

        Employee[] emp = new Employee[n];
        for (i=0;i<n;i++){
            if(i == 0){
                char grade;
                int num;
                System.out.println("Enter Manger details:- ");
                System.out.print("Enter Name: ");
                name = sc.nextLine();
                System.out.print("Enter Id: ");
                id = sc.nextInt();
                System.out.print("Enter salary: ");
                salary = sc.nextDouble();
                sc.nextLine();
                System.out.print("Enter grade: ");
                grade = sc.next().charAt(0);
                System.out.print("Enter number of projects: ");
                num = sc.nextInt();
                sc.nextLine();
                emp[i] = new Manager(name,id,salary,grade,num);
            }
            else{
                System.out.println("Enter Employee details:- ");
                System.out.print("Enter Name: ");
                name = sc.nextLine();
                System.out.print("Enter Id: ");
                id = sc.nextInt();
                System.out.print("Enter salary: ");
                salary = sc.nextDouble();
                emp[i] = new Employee(name,id,salary);
                sc.nextLine();
        }
        emp[i].upgradeSalary();

        }
        System.out.println("All details:- ");
        for(Employee e:emp){
            System.out.println();
            e.display();
        }
       
        sc.close();
    }
    
}

