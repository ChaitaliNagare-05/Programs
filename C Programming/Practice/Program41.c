#include<stdio.h>
#include<stdlib.h>

void int Maximum(int No1, int No2)
{
    if(No1>No2)
    {
        printf("Maximun is:  %d\n",No1);

    }
    else{
        printf("Maximun is %d\n",No2);
    }


}

int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    Maximum(iValue1,iValue2);





    return EXIT_SUCCESS;
}
 

