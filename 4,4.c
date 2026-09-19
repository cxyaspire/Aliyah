#include <stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;//固定格式：表达式1？表达式2：表达式3，1为真则2，反之为3 
	printf("%c\n",ch);
	return 0;
}
