 //Aproach 3

 import java.util.*;
 class Arithmetic{
    public  int Addition(int iNo1,  int iNo2)  //why static unnecesary staic method  
    {
        int iAns = 0;
        iAns=iNo1+iNo2;
        return iAns;


    }

 }
 class Program38{
    
    public static void main(String[] A){
        
        Scanner scanner = null;
        Arithmetic arithmetic = null;  // without new keyword object cannot be created
        int iValue1 = 0, iValue2 = 0, iResult =0;

        scanner = new Scanner(System.in); //c madhe std.in
        
        System.out.println("Enter first number:");
        iValue1=scanner.nextInt();

        System.out.println("Enter second number:");
        iValue2=scanner.nextInt();
        arithmetic =  new Arithmetic();

        iResult=arithmetic.Addition(iValue1,iValue2);   //class name+method name
        
        System.out.println("Addition is: "+iResult);


       
        

    

       

    }
 } 
    
// two classes created
// static removed 