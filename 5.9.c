#include <stdio.h>
#include <math.h>
int main()
{int n,i;
 printf("please enter an integer number,n=");
 scanf("%d",&n);
 for(i=2;i<n;i++)
  if(n%i==0)break;
  if(i<n)printf("%d is not a prime number.\n",n);
  else printf("%d is a prime number.\n",n);//正常结束的循环，其循环变量的值必然大于事先指定的循环变量终值 
 return 0;
 
 int k;
 printf("please enter an integer number,n=");
 scanf("%d",&n);
 k=sqrt(n);//k为根号n的整数部分 
 for(i=2;i<=k;i++)
  if(n%i==0)break;
  if(i<=k)printf("%d is not a prime number.\n",n);
  else printf("%d is a prime number.\n",n);//正常结束的循环，其循环变量的值必然大于事先指定的循环变量终值 
 return 0;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
