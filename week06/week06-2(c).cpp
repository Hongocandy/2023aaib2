#include <stdio.h>

int main( void )
{
   int i,j;
   int n;

   printf("請輸入大小:\n");
   scanf("%d",&n);
   
//your code
   for(i=1;i<=4;i++){
	   int star=n,space=i;
	   
	   for(int k=0;k<space;k++)printf(" ");
	   for(int k=0;k<star;k++)printf("*");
	      printf("\n"); 
	   }
	   return 0;
}