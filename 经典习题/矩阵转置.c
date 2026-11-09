#include <stdio.h> int main()
{ int i, j, temp;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};/*行列互换*/
for(i=0;i<3;i++)
for(j=i+1;j<3;j++){/*只遍历上三角阵*/
temp = a[i][]; a[i][]= a[][i]; a[j][i]= temp;}
for(i=0 ;i<3; i++) {
for(j=0;j<3;j++)
printf("%5d", a[i][i]);
printf("\n");
}
return 0;}
