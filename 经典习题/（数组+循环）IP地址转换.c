#include <stdio.h>
int main(void)
{
    char s[35];
    scanf("%s", s); // 直接读取32位01字符串，没有空格，scanf可用

    // 4组，每组8位
    for(int k = 0; k < 4; k++)
    {
        int num = 0;
        // 每组内8个字符
        for(int i = 0; i < 8; i++)
        {
            int pos = k*8 + i;
            num = num * 2 + (s[pos] - '0'); // s[pos]-'0'：字符'0'/'1'转数字0/1
        }
        if(k != 3)
            printf("%d.", num);
        else
            printf("%d", num);
    }
    return 0;
}
