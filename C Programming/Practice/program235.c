#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char Arr[100];

    printf("Enter string: \n");
    //scanf("% [^'\n']s", Arr);
    fgets(Arr,sizeof(Arr),stdin); // either u can write scanf or fgets 

    printf("Entered string is %s\n",Arr);  
    
    


    return EXIT_SUCCESS;
}
