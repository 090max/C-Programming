/*
ABSOLUTE NO. OF PAIRS
eg.
no. of elements =9
10 20 30 20 30 10 40 50 20 40
OUTPUT =4
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a,i,j,k,c=1,e=0;
	scanf("%d",&a);
	int d[a];
	for(i=0;i<a;i++)
        scanf("%d",&d[i]);
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;)
        {
            if(d[i]==d[j])
            {c=c+1;
                for(k=j;k<a;k++)
                    d[k]=d[k+1];
                    --a;
            }
        else
            j++;
        }
e=e+c/2;
c=1;
	}
   printf("%d",e);
    return 0;
}
