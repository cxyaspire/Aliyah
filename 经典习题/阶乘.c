#include <stdio.h>
int jiecheng(int a); 
int main()
{int a;
printf("请输入一个数为：");
scanf("%d",&a);
printf("%d!=%d\n",a,jiecheng(a));
return 0;
}

int jiecheng(int a)
{int c;
 if(a==0||a==1)
  c=1;
 else
  if(a<0)
   {printf("阶乘不存在\n");
   return -1;             //标记错误 
   }
  else
   c=a*jiecheng(a-1);
 return(c);
}
