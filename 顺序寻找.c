#include <stdio.h> 
int main()
{int i,s[5],a,b=-1;//b初始化为-1代表未找到 
 printf("请随机输入5个数字为：");
 for(i=0;i<=4;i++)                
  {
  scanf("%d",&s[i]);
  }

 printf("请输入您要查找的数字为");
 scanf("%d",&a);
 for(i=0;i<=4;i++) //循环的作用只是查找值，是否找到目标不应放在循环里判断  
  if(s[i]==a)
    {
     b=i+1;
     break; 
    }
 
//循环结束后统一输出 
  if(b==-1)
    printf("未查找到该数字");
  else printf("已找到该数字，它是第%d个数字\n",b);
 return 0;
 
  
  
 
}
