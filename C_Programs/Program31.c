#include<stdio.h>  
#include<stdlib.h>

int main()  //naked method
{
    
    char sName[30]; //char array static memory allcation
    int iAge=0;
    float fMarks=0.0f;

    printf("Enter your name : \n");
    scanf("% [^'\n']s", sName); //enters remains in input buffer(\n)

    printf("Enter your age:\n");
    scanf(" %d",&iAge);  //Space added
    printf("Enter your marks: \n");
    scanf("%f",&fMarks); //name of array internally holds base address



    printf("Welcome %s\n",sName); // + not in c
    printf("Your age is : %d\n",iAge);
    printf("Your marks: %f\n",fMarks);




    return EXIT_SUCCESS;

}
/// next scanf knows that directly enters enters
///buufer input
///flush method function name fflush,flush function may behave diff on os platform

