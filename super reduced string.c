/*
INPUT -
aaabccddd

aaabccddd → abccddd
abccddd → abddd
abddd → abd

OUTPUT -
abd
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main()
{
   char a[100];
scanf("%s",a);
int k=strlen(a);
int i;
int x;
int c=0;
for(i=0;i<k-1;)
{
if(a[i]==a[i+1])
{   c=c+1;
    for(x=i+1;x<k-1;x++)
        a[x]=a[x+1];
    for(x=i;x<k-1;x++)
        a[x]=a[x+1];
    k=k-2;
 i=0;

}
else
    i++;
}
if(k!=0)
    for(i=0;i<k;i++)
    printf("%c",a[i]);
if(k==0)
    printf("Empty String");

    return 0;
}
