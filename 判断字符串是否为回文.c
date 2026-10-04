#include <stdio.h>
#include <string.h> //字符串需要这种头文件 
int main()
{int i,l,b=1;
 char a[5];         //数据类型别忘了 
 scanf("%s",&a);    //不能临时输入数组的大小 ,且这个地方得写数组名，代表整组 
 l=strlen(a);       //错误（已修正）：strlen的参数是数组名，是a不是a[5] 
 for(i=0;i<l/2;i++)
   if(a[i]!=a[l-i-1])//错误（已修正）：strcmp不能用来比较单个字符 ；一定要搞明白从0开始 
      {b=0;
      break;
	  }
 if(b==1)
  printf("此字符串为回文\n");
 else
  if(b==0) 
  printf("此字符串不为回文\n");
  
 return 0;
 } 
