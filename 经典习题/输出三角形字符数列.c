#include <stdio.h>
int main()
{
    int n,p,q,m;
    scanf("%d",&n);
    char i='A';
    for(q=n;q>=1;q--)
    for(m=1;m<=q;m++)
    {  printf("%c ",'A'+(n+q)*(n-q+1)/2-q+m-1);
           if(q==m)
              printf("\n");
            }
     
    return 0;



    
}
