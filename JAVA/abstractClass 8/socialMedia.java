abstract class SocialMediaHome{
        abstract void writePost();
        abstract void deletePost();   
    }
    
    class Profile extends SocialMediaHome{
        void writePost(){
            System.out.println("Post has successfully been written.");
        }
        void deletePost(){
            System.out.println("Post deleted successfully.");
        }
        void uploadVideo(){
            System.out.println("Video uploaded successfully.");
        }
    }
    public class socialMedia { 
        public static void main(String[] args){
            Profile p = new Profile();
            p.uploadVideo();
    
        }
    }

