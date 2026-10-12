package C_Programming.CPP_Programming.Java_Programming;
 //bad progarmming practice to start with *
 class Program28{
    public static void main(String[] A){
        Scanner scanner = null;
        String sName = null;
       
        int iAge=0;
        float fMarks = 0.0f;

        scanner = new Scanner(System.in);

        System.out.println("Enter your name:");
        sName = scanner.next(); //Exception

        System.out.println("Enter your age:");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks:");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome"+ sName);
        System.out.println("Your age is"+ iAge);
        System.out.println("Your Marks"+ fMarks);
        


    }
 } 
    

