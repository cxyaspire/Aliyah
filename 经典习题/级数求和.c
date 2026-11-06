#include <stdio.h>
int main()
{int k;
 scanf("%d",&k);
 int a=0,i;
 double m=0.0;    //使用float精度不够
 for(i=1;;i++)
 { m+=1.0/i;      //使用除法一定得浮点数！！！
   if(m>k)
   {a=i;
    break;
    }
 } 
 printf("%d\n",a);
 return 0;
     
    
}
