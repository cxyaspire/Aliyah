#include <stdio.h>
int main(void)
{int i,max,min,y[3];
 double average;//使结果更精确 
 printf("请随机输入三个数字为：");
 for(i=0;i<=2;i++) //少数数组输入可选用如scanf("%d%d%d",&y[0],&y[1],&y[2]);，但多数组一般用循环，不然也太累了 
  scanf("%d",&y[i]);
 max=y[0];
 min=y[0];
 for(i=0;i<=2;i++)
 {
 if(y[i]>max)
 max=y[i];
 if(y[i]<min)
 min=y[i];
 }
 average=(y[0]+y[1]+y[2])/3.0;//易错:必须包含一个浮点数输出才会是浮点数 
 printf("最大值为%d,最小值为%d\n平均数为%.1f",max,min,average);
 
return 0;
}
