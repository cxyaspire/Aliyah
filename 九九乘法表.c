#include <stdio.h>
int main(void)
{printf("                         九九乘法表              \n");
int i=1,n=1,u;
 for(i=1;i<=9;i++)     //行的循环 
   for(n=1;n<=i;n++)   //列的循环 
   {u=i*n;
    if(n==i) printf("%d\n",u);
	else  printf("%d\t",u);
   }
   
	
return 0;
}
