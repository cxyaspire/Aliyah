#include <stdio.h> 
int main()
{
int a[ 15]={100, 93, 86, 84, 77, 73, 68, 60, 55, 51, 42, 39, 31, 25, 10}; //已按降序排列
int x,left=0, mid, right=14,flag=0;
printf("Input a number to be searched: "); 
scanf("%d", &x);
if(x<=a[left]&&x>=a[right])
{/*x在查找范围内*/ 
  while(!flag && left<=right)/*循环条件*/
  {mid=(left+right)/2;/*中点下标*/ 
   if(a[mid]==x)/*找到x*/
   {flag=1;
    break;}
   else
   {	/*未找到*/	
   if(x>a[mid])/*x比中点的值大*/
     right=mid-1;
   else	left=mid+1;}	
   }
}
if(flag==1)
printf("%4d is found, it's at %4d.\n", x, mid);
else
printf("Not exist!\n"); 
return 0;
}
