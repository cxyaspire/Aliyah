#include <stdio.h>
#define SUM 100000
int main()
{int i=1,num;
 float total=0,amount,average;
 while(total<=SUM,i<=1000)
  {
  printf("请输入此同学提交金额（元）为：");
 scanf("%f",&amount) ;
 
 total+=amount;
 i++;
  }
 printf("num=%d\n",i-1);
 average=total/(i-1);
 printf("average=%f",average);
 return 0;
 
}
