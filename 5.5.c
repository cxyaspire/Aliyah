#include <stdio.h>

int main()
{
 int n;
 for(n=100;n<=200;n++) 
 {
 	if(n%3==0)
 	continue;//continue语句，直接跳转到下一个数的验证 ，只终止本次循环 
 	printf("%d\t",n);
 	
 }
 
 printf("\n");
 return 0;
}
