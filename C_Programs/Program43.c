#include<stdio.h>
#include<stdlib.h>

 int Minimum(int No1, int No2)
{
    if(No1<No2)
    {
        printf("Minimum is:  %d\n",No1);

         return No1;

    }
    else{
        printf("Minimum is %d\n",No2);

        return No2;
    }



}

int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iResult = Minimum(iValue1,iValue2);

    printf("Minimum number is: %d\n",iResult);





    return EXIT_SUCCESS;
}
 

