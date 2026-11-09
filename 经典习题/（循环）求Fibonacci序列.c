#include <stdio.h>
int main()
{x1=1: x2=1;
 printf("%6d%6d",x1,x2);/*输出头两项*/
for(i=1;i<=8;i++)
{	/*循环输出后8项*/	
 x=x1+x2;	/*计算新项*/	
 printf( "%6d", x);
x1 = x2;	/*更新x1和x2*/	
x2 = x;}
return 0;
}
