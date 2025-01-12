
    class Boo{
        protected String title,author,ISBN;
 
        Boo(String title,String author, String ISBN){
            this.title = title;
            this.author = author;
            this.ISBN = ISBN;
        }
    }
    class EBook extends Boo{
        public int file_size;
      
        EBook(String title,String author, String ISBN,int file_size){
            super(title, author, ISBN);
            this.file_size = file_size;
        }
        
    
        public void print(){
            System.out.println("Title:- "+this.title);
            System.out.println("author:- "+this.author);
            System.out.println("ISBN:- "+this.ISBN);
            System.out.println("file size:- "+file_size+" mb");
        }
    
    }
    

    public class book {
        public static void main(String[] args) {
            EBook []e=new EBook[3];
            for(int i=0;i<3;i++){
             e[i] = new EBook("mahesh","Musaif", "123",40);
            }

            for(int i=0;i<3;i++){
                e[i].print();
            }
            
            
        }
    }

