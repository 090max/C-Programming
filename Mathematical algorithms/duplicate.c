#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],z[20];
    int n;
    int e=0;
    int c=0;

    printf("enter size of an array : ");
    scanf("%d ",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<e+1;j++)
        {
            if(a[i]==z[j])
            {
                c=c+1;
            }
        }
        if(c==0)
        {
            z[e]=a[i];
            e=e+1;
        }
        else
        {
            c=0;
        }
    }
        for(j=0;j<e;j++)
        {
            printf("%d ",z[j]);
        }
        return 0;

}
