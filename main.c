#include <stdio.h>
int main()
{
  
   int i, num, p;
   int a,b;
   loop:
   i=0;num=0; p=0;
   printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(num<0);
   else if(p==2)
   {
      printf("Number %d  is a prime number.\n",num);
      printf("----------------------------------\n");
             for(b=1; b<=12; b++)
          {
               printf("%d x %d = %d \n",num,b,b*num);
              
          } 
          printf("----------------------------------\n");
          goto loop;
   }
   else
   {
      printf("Number  %d Not prime number !!! \n",num);
      goto loop;
   }
   
}