#include <stdio.h>
int main(void)
{  //版本1：使用数字代替符号 
   int symbol_1;
   printf("====运算菜单====\n");
   printf("1：加法\n");
   printf("2：减法\n");
   printf("3：乘法\n");
   printf("4：除法\n");
   printf("5：取余\n");
   int a,b;
   scanf("%d%d\n",&a,&b);
   printf("a=%d,b=%d\n",a,b);
   scanf("%d",&symbol_1);
   printf("输入运算编号为%d\n",symbol_1);
   switch(symbol_1)
   {case 1:printf("a+b=%d\n",a+b);break;
    case 2:printf("a-b=%d\n",a-b);break;
	case 3:printf("a*b=%d\n",a*b);break;
	case 4:if(b!=0)printf("a/b=%.2f（保留两位小数）\n",(double)a/b);         //强制转换使结果更精确 
	       else printf("除数为0,无法计算\n");break;
	case 5:printf("a取余b=%d\n",a%b);break;
	default:printf("在下能力有限，暂时无法为您服务\n"); 
	}
	//版本二：直接选择符号表达 
	char symbol_2;
   scanf(" %c",&symbol_2);                                   //注意！超级大坑点！scanf缓冲区残留换行坑，%d读数字会自动跳过空格、回车，
    switch(symbol_2)                                         //但%c会原样读取回车、空格，在%c前面加空格就i能自动吃掉缓冲区内所有空白字符 
   {case '+':printf("a+b=%d\n",a+b);break;
    case '-':printf("a-b=%d\n",a-b);break;
	case '*':printf("a*b=%d\n",a*b);break;
	case '/':if(b!=0)printf("a/b=%.2f\n",(double)a/b);
	         else printf("除数为0,无法计算");break;
	case '%':printf("a%b=%d\n",a%b);break;
	default:printf("在下能力有限，暂时无法为您服务\n"); 
	}	
   
	
	return 0;
}
