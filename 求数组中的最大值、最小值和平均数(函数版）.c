#include <stdio.h>
int Max(int y[20],int m);
int Min(int y[20],int m);
int sum(int y[20],int m);
float average(int n,int m);
int main(void)
{int i,y[3];
 printf("请随机输入三个数字为：");
 for(i=0;i<=2;i++) //少数数组输入可选用如scanf("%d%d%d",&y[0],&y[1],&y[2]);，但多数组一般用循环，不然也太累了 
  scanf("%d",&y[i]);
 printf("最大值为%d,最小值为%d\n平均数为%.1f",Max(y,3),Min(y,3),average(sum(y,3),3));//错误一（已修正）：传递整个数组直接写数组名，即直接写y 
 
return 0;
}

int Max(int y[20],int m)//char不能存整数 
{int i,max;//错误二（已修正）：变量要先定义再使用，改成函数的时候不要忘记 
 max=y[0];//错误三(已修正）：函数名和函数内部变量不能重名 
 for(i=0;i<=m-1;i++)
 if(y[i]>max)
 max=y[i];
 return(max);
} 

int Min(int y[20],int m)
{int i,min;
 min=y[0];
 for(i=0;i<=m-1;i++)
 if(y[i]<min)
 min=y[i];
 return(min);
}

int sum(int y[20],int n)
{int i;
 int m=0;
 for(i=0;i<=n-1;i++)
 m+=y[i];
 return m;
}

float average(int n,int m)//错误四（已修正）：独立函数里面不能再写别的函数声明 
{
 return(float)n/m; //强制转换，把转换类型包起来 
}
