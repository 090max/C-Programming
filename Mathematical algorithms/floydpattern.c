/*FLOYD PATTERN

1
01
101
0101
10101
*/

#include<stdio.h>
void main()
{
int a,i,j;
int f=0;
int g=1;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(j=0;j<i;j++)
{if(j%2==0)
printf("%d",g);
if(j%2!=0)
    printf("%d",f);
}
f=f+g;
g=f-g;
f=f-g;
printf("\n");
}
}
