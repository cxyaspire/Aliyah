#include <stdio.h>
int main(void)
{int a,i;
 int flag=1;//flag=1:默认是素数，比较方便后续辨别 ！！! 
 printf("请输入一个数字：");
 scanf("%d",&a);                      //错误1（已修正）：scanf的格式串里不要加\n，否则会卡住！！! 
 if(a<=1)
   flag=0; //肯定不是素数            
 for(i=2;i<a;i++)                     //错误2（已修正）:从i=1开始无意义 ;i只需小于a即可 
 { if((a%i)==0)//a能够整除某个数 
    {flag=0;//flag的值改变 
     break; 
    }
 } 
 if(flag==1)//a不能整除某个数 
   printf("%d为一个素数\n",a);
 else 
   printf("%d不是一个素数\n",a); 

 return 0;
}
