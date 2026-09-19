#include <stdio.h>
int main()
{//版本1 
 int x,y;
 scanf("%d",&x);
 if(x<0)
   y=-1;
   
 if(x==0)
   y=0;
   
 if(x>0)
   y=1;
 printf("x=%d,y=%d",x,y);//只需要一个输出即可 
 
 return 0;




//版本2(嵌套if语句） 
 
 if(x<0)
   y=-1;
 else
   if(x==0)y=0;
   else y=1;
 printf("x=%d,y=%d",x,y);//只需要一个输出即可 
 
 return 0;




//版本2(简化嵌套if语句） 
 
 if(x<=0)
   if(x<0) y=-1;
   else    y=0;//else总是和if成对出现 
 else      y=1;
 printf("x=%d,y=%d",x,y);//只需要一个输出即可 
 
 return 0;
}
