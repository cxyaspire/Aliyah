#include <stdio.h>
void symbol_2(int a,int b,char c)
{  switch(c)                                   
   {case '+':printf("选择的运算为加法，a+b=%d\n",a+b);break;
    case '-':printf("选择的运算为减法，a-b=%d\n",a-b);break;
	case '*':printf("选择的运算为乘法a*b=%d\n",a*b);break;
	case '/':if(b!=0)printf("选择的运算为除法a/b=%.2f\n",(double)a/b);
	         else printf("除数为0,无法计算");break;
	case '%':printf("选择的运算为取余，a%b=%d\n",a%b);break;
	default:printf("在下能力有限，暂时无法为您服务\n"); 
	}
}

int main()
{  
   int a,b;
   char c; 
   scanf(" %c",&c);                                   //注意！超级大坑点！scanf缓冲区残留换行坑，%d读数字会自动跳过空格、回车，但%c会原样读取回车、空格，在%c前面加空格就i能自动吃掉缓冲区内所有空白字符
   scanf("%d%d",&a,&b);
   printf("a=%d,b=%d\n",a,b);
   symbol_2(a,b,c);
   return 0;
}
 
