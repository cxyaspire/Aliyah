#include <stdio.h>
void lines(void)     //函数声明：告诉编译器有这个函数 
{char a[]={"愿此行，终抵群星。"};
 char b[]={"贝洛伯格，永屹不倒！"};
 char c[]={"吾等云骑，如云翳障空，卫蔽仙舟！"};
 char d[]={"生命因何而沉睡？因为……总有一天……我们会从梦中醒来。"};
 char e[]={"英雄啊，兑现那染血的冀望！"};
 char f[]={"群星沉默不语，但我说，要有笑声。"};
 printf("%s\n%s\n%s\n%s\n%s\n%s\n",a,b,c,d,e,f);
}


int main()
{
lines();     //函数调用：执行函数里代码，不需要在前面加void重新定义 
return 0;
}
