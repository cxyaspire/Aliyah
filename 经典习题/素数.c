#include <stdio.h>
void prime(int a)
{int i;
 int flag=1;                          //flag=1:默认是素数，比较方便后续辨别 ！！! 
 if(a<=1)
   flag=0;                            //flag=0:肯定不是素数            
 for(i=2;i<a;i++)                     //错误（已修正）:从i=1开始无意义 ;i只需小于a即可  写循环条件时一定要注意选择 
 { if((a%i)==0)                       //a能够整除某个数 
    {flag=0;                          //flag的值改变 
     break; 
    }
 }
 //先判断flag再判断素数 
 if(flag==1)                     
   printf("%d为一个素数",a);
 else 
   printf("%d不是一个素数",a); 

 return 0;
}



int main(void)
{int a;
 printf("请输入你要判断的数字为：");
 scanf("%d",&a); 
 prime(a);                             //此处要记得写分号 
 return 0;
}
