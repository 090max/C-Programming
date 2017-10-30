/*reverses a number
upto a particular
digit of numbers

input - 123456789
output - 321654987
*/

#include<stdio.h>
void main()
{int a,i,k,t;
printf("no. of elements");
scanf("%d",&a);
int x[a];
for(i=0;i<a;i++)
scanf("%d",&x[i]);
printf("enter k element");
scanf("%d",&k);
for(t=0;t<a-k+1;t=t+k)
    {for(i=t+k-1;i>=t;i--)
         printf("%d",x[i]);}}
