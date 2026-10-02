#include <stdio.h>
int main()
{int i,j,row=0,colum=0,max;
 int a[3][4]={{0,5,2,6},{1,9,7,8},{-10,-3,3,10}};
 max=a[0][0];                                       //假设第一个数最大，方便比较 
 for(i=0;i<=2;i++)                                 //易错：如果这个地方写3，i<=3验证通过后会继续+1，最后输出为4，下面的3同理 
   for(j=0;j<=3;j++)
   if(max<a[i][j])                                 //直接与max比较 
     max=a[i][j];
     row=i;     //记下此数的行数 
     colum=j;   //记下此数的列数 
 printf("该数组中最大的数为%d\n",max);
 printf("该数所处的行数和列数分别为%d,%d\n",row,colum);
 return 0;
}
