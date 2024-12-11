
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class JDBCpostgresqlConnect {

	private Connection conn=null;
	private ResultSet res=null;
	private void connect(String url,String user,String pass) {
		try{
			conn=DriverManager.getConnection(url,user,pass);
			if(conn!=null) {
				System.out.println("Connected Successfully!!");
			}
		}catch(SQLException e) {
			System.out.println("Connection failed");
			e.printStackTrace();
		}
	}
	
	private void CloseConnection() {
		try {
			conn.close();
			System.out.println("Connection closed Successfully!");
		}catch(SQLException e) {
			e.printStackTrace();
		}
	}
	
	private void ExecuteUpdate(String query,String cause) {
		try{
			Statement statement=conn.createStatement();
			statement.executeUpdate(query);
			System.out.println(cause+" command successfull!");
			statement.close();
		}catch(SQLException e) {
			e.printStackTrace();
		}
	}
	
	private void SelectQuery(String query) {
		try{
			Statement statement=conn.createStatement();
			res=statement.executeQuery(query);
			while(res.next()) {
				String row = "";
		        for (int i = 1; i < 7; i++) {
		            row += res.getString(i) + ", ";          
		        }
		        System.out.println(row);
			}
			statement.close();
		}catch(SQLException e) {
			e.printStackTrace();
		}	
	}	

public static void main(String args[]) {
	Scanner sc=new Scanner(System.in);
	JDBCpostgresqlConnect postgreConnect= new JDBCpostgresqlConnect();
	String url ="jdbc:postgresql://localhost/java";
	String user="postgres";
	String pass="Raagu@20";
	postgreConnect.connect(url,user,pass);
	String createTable ="CREATE TABLE IF NOT EXISTS employee (eno int primary key,ename varchar(20),birthyear INT,joinYear INT, designation VARCHAR(10),Salary BIGINT);";
	String dropTable="DROP TABLE IF EXISTS employee;";
	
	String insert;
	int eno;
	String ename;
	int byear;
	int jyear;
	String desg;
	long sal;
	
	postgreConnect.ExecuteUpdate(dropTable,"Drop table employee");
	postgreConnect.ExecuteUpdate(createTable,"Create table employee");
	for(int i=0;i<2;i++) {
		System.out.print("Enter Employee id :");
		eno=sc.nextInt();
		sc.nextLine();
		System.out.print("Enter Employee name :");
		ename=sc.nextLine();
		System.out.print("Enter Employee birth year :");
		byear=sc.nextInt();
		System.out.print("Enter Employee joining year :");
		jyear=sc.nextInt();
		sc.nextLine();
		System.out.print("Enter Employee designation :");
		desg=sc.nextLine();
		System.out.print("Enter Employee Salary :");
		sal=sc.nextLong();
		
		insert=String.format("INSERT INTO employee values(%d,'%s',%d,%d,'%s',%d);",eno,ename,byear,jyear,desg,sal);
		postgreConnect.ExecuteUpdate(insert,"Insert into table employee");
		
	}
	
	System.out.println("\n\nTable :-");
	String select="SELECT * FROM employee";
	postgreConnect.SelectQuery(select);
	
	String update="UPDATE employee SET Salary=Salary+(Salary*0.1) WHERE ename='Mr.Ashok J'; ";
	postgreConnect.ExecuteUpdate(update,"Update");
	
	System.out.println("\n\nAfter updation in Salary:-");
	select="Select * FROM employee WHERE ename='a';";
	postgreConnect.SelectQuery(select);
	
	String delete="DELETE FROM employee WHERE joinYear = 2002 AND ename like 'A%';";
	postgreConnect.ExecuteUpdate(delete,"Delete");
	
	System.out.println("\n\nTable After deletion:-");
	select="SELECT * FROM employee";
	postgreConnect.SelectQuery(select);
	
	sc.close();
	postgreConnect.CloseConnection();
}
}
