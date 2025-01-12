    // Creating a text File using FileWriter 
    import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileWriter; 
    import java.io.IOException;
    import java.util.Scanner; 
    
public class IOexception {

        static void createFile(){
            try {
                File myObj = new File("file1.txt");
                if (myObj.createNewFile()) {
                    System.out.println("File created: " + myObj.getName());
                } else {
                    System.out.println("File "+myObj.getName()+" already exists.");
                }
            }catch(IOException e) {
                System.out.println("An error occurred.");
                e.printStackTrace();
            }
        }

        static void writeFile(String s,boolean var){
            try {
                FileWriter myWriter = new FileWriter("file1.txt",var);
                myWriter.write(s);
                myWriter.close();
                System.out.println("Successfully wrote to the file.");
              } catch (IOException e) {
                System.out.println("An error occurred.");
                e.printStackTrace();
              }
        }

        static void copyToFile(File a,File b){             
            FileInputStream in=null;
            FileOutputStream out=null;
            try {
                in = new FileInputStream(a); 
                out = new FileOutputStream(b);
            }catch(FileNotFoundException e){
                System.out.println("File not found");
            }
            

            try { 
                int n; 
                while ((n = in.read()) != -1) { 
                    out.write(n); 
                } 
            }catch(IOException e){
                System.out.println("Error occured");
            }
            finally { 
                try { 
                    if (in != null) { 
                        in.close(); 
                    } 
                    if (out != null) { 
                        out.close(); 
                    } 
                }catch(IOException e){
                    System.out.println("Error occured");
                }
            } 
            System.out.println("File Copied");
        }

        static void readFile(File a){
                try {
                    Scanner myReader = new Scanner(a);
                    while (myReader.hasNextLine()) {
                        String data = myReader.nextLine();
                        System.out.println(data);
                    }
                    myReader.close();
                } 
                catch (FileNotFoundException e) {
                    System.out.println("An error occurred.");
                    e.printStackTrace();
                }
        }
    public static void main(String[] args) throws IOException 
	{ 
		createFile();
        writeFile("Files in Java might be tricky, but it is fun enough!",false);
        readFile(new File("file1.txt"));
        copyToFile(new File("file1.txt"), new File("file2.txt"));
        readFile(new File("file2.txt"));
        writeFile("1\n2\n3\n",false);
        readFile(new File("file1.txt"));
     }
} 


