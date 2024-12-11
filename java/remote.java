
    interface TVRemote{
        boolean radioSignalBulb = true;
        void volumeUp();
        void volumeDown();
    
    }
    
    interface SmartTVRemote extends TVRemote{
        void goBack();
        void Alixa();
    
    }
    class TV implements SmartTVRemote{
       
        public void volumeUp(){
            System.out.println("Volume is up");
        }
        
        public void volumeDown(){
            System.out.println("Volume is Down");
        }

        public void goBack(){
            System.out.println("Going back");
        }

        public void Alixa(){
            System.out.println("hey");
        }
    
    }
    public class remote {
        public static void main(String args[]){
            TV tv = new TV();
            tv.volumeDown();
            tv.volumeUp();
    
        }
    }
