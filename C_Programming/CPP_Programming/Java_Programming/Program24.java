package C_Programming.CPP_Programming.Java_Programming;
 import java.util.Scanner; 
 class Program24{
    public static void main(String[] A){

        Scanner scanner = null ; 
        String sName = null;   //class refernce refers to object

        scanner = new Scanner(System.in);  

        System.out.println("Enter your name :");
        sName = scanner.next();  //method next method is usedd to accept the word

        System.out.println("Welcome"+ sName);


    }
 } 
    

