#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char Arr[20]="Ganesh Pune"; //space gets counted  //8 bytes remaining
    printf("%s\n",Arr);

    printf("Size of Array is:%d\n",sizeof(Arr));

    printf("Lengthof string is:%d\n",strlen(Arr));



    return EXIT_SUCCESS;
}
// length madhe \0 does not ger count