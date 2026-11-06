#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    if (n == 0) 
    {
        printf(7 % 3 == 0 ? "YES\n" : "NO\n");
        return 0;
    }
    if (n == 1)
    {
        printf(11 % 3 == 0 ? "YES\n" : "NO\n");
        return 0;
    }
    int a = 7 % 3;  
    int b = 11 % 3; 
    int current_mod = 0;
    for (int i = 2; i <= n; i++) 
    {
        current_mod = (a + b) % 3; 
        a = b;
        b = current_mod;
    }
    if (current_mod == 0)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }

    return 0;
}
