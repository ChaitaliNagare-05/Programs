/*
iRol=4
iCol=4
 $ * * *
 * $ * *
 * * $ *
 * * * $



*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{

int i=0,j=0;

if(iRow != iCol)
{
  printf("Invalid input\n");
  return;
}

char ch='\0';

for(j=1;j<=iRow;j++)



  {
    
    for(j=1;j<=iCol;j++,ch++)
    {
      if(i==j)
      {
        printf("$\t");

      }
      else{
        printf("*\t");
      }
      printf("%c\t",ch);
    }
   

    


  }
  printf("\n\n");
}







  

int main(){
int iValue1=0,iValue2=0;


printf("Enter number of rows:\n");
scanf("%d",&iValue1);

printf("Enter number of columns:\n");
scanf("%d",&iValue2);

Pattern (iValue1,iValue2);







  



  

  return EXIT_SUCCESS;
}