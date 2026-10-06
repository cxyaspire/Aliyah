#include <stdio.h>
#include <string.h>
void count(char a[])
{int i,b=0,c=0,d=0;
 for(i=0;a[i]!='\0';i++)      //错误（已修正）：字符串循环条件不要写死为a[i]<=18 
 {if(a[i]>='0'&&a[i]<='9')
     {b++;
      continue;
	 }
  if(a[i]==' ')               //错误（已修正）：空格的话中间就要空格啊 ,等于一定要是==！！！ 
     {c++;
      continue;
	 }
  if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
     {d++;
     continue; 
     } 
  }
 printf("其中，数字的个数为%d,\n空格的个数为%d,\n字母的个数为%d。",b,c,d);
}


int main()
{
 char a[20];
 printf("请输入一个字符串：");
 gets(a);                     //错误（已修正）：scanf不能接收空格，如果只统计数字、字母可写为scanf("%s",a)无需&!!! 
 count(a);
 return 0;
}
