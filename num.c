#include<stdio.h>

int main(void)
{
   int a[10];
   int i;
   printf("Please input 10 numbers\n");
   for(i=0;i<10;i++)
      scanf("%d ",&a[i]);
   printf("your 10 numbers:\n");
   for(i=0;i<10;i++)
      printf("%d\n",a[i]);
   return 0;
}																							
