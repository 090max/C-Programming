/*TRANSPOSE OF A MATRIX
INPUT -
123
456
789
OUTPUT-
147
258
369*/
#include<stdio.h>
void main()
{
int a=3;
int x[3][3];
int i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&x[i][j]);
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
printf("%d",x[j][i]);
printf("\n");}
}
