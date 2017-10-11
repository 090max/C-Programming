/*this c programme is to interchange the diagonal elements of any N X M matrix
eg.
123
456
789
to
321
456
987
*/
#include<stdio.h>
void main()
{
int n;
int m;
int i,j,t=0;
printf("Enter N");
scanf("%d",&n);
printf("Enter M");
scanf("%d",&m);
int x[n][m];
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        scanf("%d",&x[i][j]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        {
        if(i==j)
        {t=x[i][m-j-1];
        x[i][m-j-1]=x[i][j];
        x[i][j]=t;}
        }
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        printf("%d",x[i][j]);

printf("\n");
}
}
