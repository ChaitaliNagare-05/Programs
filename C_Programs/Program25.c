#include<stdio.h>  
#include<stdlib.h>

int main()  //naked method
{
    char sName[30]; //char array static memory allcation
    printf("Enter your name : \n");
    scanf("%s",sName); //not using &operator

    printf("Welcome %s\n",sName); // + not in c





    return EXIT_SUCCESS;

}


//scanf input stops