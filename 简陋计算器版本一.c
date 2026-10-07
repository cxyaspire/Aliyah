#include <stdio.h>
void caidan(void)
{  printf("====运算菜单====\n");
   printf("1：加法\n");
   printf("2：减法\n");
   printf("3：乘法\n");
   printf("4：除法\n");
   printf("5：取余\n");
}

void symbol_1(int a,int b,int c)
{  switch(c)
   {case 1:printf("a+b=%d\n",a+b);break;
    case 2:printf("a-b=%d\n",a-b);break;
	case 3:printf("a*b=%d\n",a*b);break;
	case 4:if(b!=0)printf("a/b=%.2f（保留两位小数）\n",(double)a/b);         //强制转换使结果更精确 
	       else printf("除数为0,无法计算\n");break;
	case 5:printf("a取余b=%d\n",a%b);break;
	default:printf("在下能力有限，暂时无法为您服务\n"); 
	}
	
}

  	
int main()
{  caidan();
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);//错误（已修正）：scanf里面用换行符表示读取并跳过所有空白，直到遇到非空白符才结束 
   printf("a=%d,b=%d\n",a,b);
   printf("输入运算编号为%d\n",c);
   symbol_1(a,b,c);
   return 0;
}
