#include <stdio.h>
int max(int a,int b);//函数声明，要有分号！ 

int main()
{int a,b;                               
 printf("请输入两个数为："); 
 scanf("%d%d",&a,&b);
 int c=max(a,b);
 printf("两者中的较大值为%d",c);
 //return 0;
}

//main和max的a和b没有任何关系，独自处于自己的函数空间中 

int max(int a,int b)
{ int ret;
  if(a>b)
   {ret=a;}
  else
  {ret=b;}
  return ret;//单一出口，从函数中返回值,该值可赋给变量，也可直接丢弃 
}          //void不能使用带值的return，也可以没有return 

