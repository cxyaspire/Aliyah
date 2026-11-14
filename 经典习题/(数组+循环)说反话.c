#include <stdio.h>
#include <string.h>

#define MAXN 500005

char s[MAXN];

int main(void) {
    // 1. 读入一整行
    fgets(s, MAXN, stdin);

    // 2. 去掉行尾的换行符
    int len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[len - 1] = '\0';
        len--;
    }

    // 3. 从后往前找单词
    int i = len - 1;      // i 指向当前扫描位置
    int printed = 0;      // 已经输出过几个单词

    while (i >= 0) {
        // 3.1 跳过连续空格
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        if (i < 0) break;   // 前面没有单词了，结束

        // 3.2 此时 s[i] 是某个单词的最后一个字母
        int wordEnd = i;

        // 3.3 继续往前，直到遇到空格或到字符串开头，找到单词开头
        while (i >= 0 && s[i] != ' ') {
            i--;
        }
        int wordStart = i + 1;

        // 3.4 输出这个单词
        if (printed > 0) {
            putchar(' ');   // 不是第一个单词，就先输出一个空格
        }
        for (int j = wordStart; j <= wordEnd; j++) {
            putchar(s[j]);
        }
        printed++;
    }

    putchar('\n');
    return 0;
}
