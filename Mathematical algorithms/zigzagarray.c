#include<stdio.h>

void main()
{
int c,n,i,j;
printf("enter size of 2D array : ")
scanf("%d",&n);

c=-n;

for(i=0;i<n;i++)
{
c=c+n;

for(j=0;j<n;j++)
{
if(i%2==0)
{
c++;
printf("%d",c);
}
if(i%2==1)
{
printf("%d",c);
c--;
}
}
printf("\n");
}
}
