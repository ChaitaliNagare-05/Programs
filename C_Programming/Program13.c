// #define EXIT_SUCCESS 0
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
    //   Function Name: Addition 
    //   Input:         Integer,Integer
    //   Output:        Integer
    //   Description:   Performs Addition
    //   Date:          04/10/2026
    //   Author:        Chaitali Vijay Nagare

///////////////////////////////////////////////////

int Addition(
              int iNo1,
              int iNo2
)
    


             
{
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;

}
///////////////////////////////////////////////////
//
//  
//           
///////////////////////////////////////////////////


int main(){
    
    int iValue1=0,iValue2=0,iResult=0;
    
    printf("Enter first number:\n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;

    }

    printf("Enter second number:\n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;

    }

    iResult=Addition(iValue1,iValue2);


    printf("Addition:%d\n",iResult);
    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////
//  Step5: Test the program
//  Tested test cases
//-----------------------------------------
//  Input1 Input2 Output
//-----------------------------------------
//  10      11     21
//  11      0      11
//   0      11     11
//  20      -9     11 
//  -9      20     11 
//------------------------------------------       
///////////////////////////////////////////////////







