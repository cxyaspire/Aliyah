#include <stdio.h>
#include <math.h>
int main()
{
int n,i,k,m=0;
for(n=101;n<=200;n++)//对每个n进行判定 
 {k=sqrt(n);//k为根号n的整数部分 
 for(i=2;i<=k;i++)
  if(n%i==0)break;//此时i小于k+1 
  if(i>=k+1)
  {printf("%d\t",n);
   m=m+1;//m用来控制换行 
  }
  if(m%10==0) printf("\n");//一行输出十个 
 }
printf("\n");
 return 0;
 
}
