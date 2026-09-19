#include <stdio.h>
//双循环 
int main()
{
 int i,j,n=0;
 for(i=1;i<=4;i++) //控制输出4行数据 
     for(j=1;j<=5;j++,n++)//控制输出每行中的5个数据 
   {
 	if(n%5==0) printf("\n");
 	printf("%d\t",i*j);
 }
 
 printf("\n");
 return 0;
}
