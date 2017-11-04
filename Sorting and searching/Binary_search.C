#include<stdio.h>
int main()
{   int a[10], num,i , n, pos=-1, beg, end, mid, found=0;
    printf("Enter The Number Of Elements of the Array\n");
    scanf("%d",&n);
    printf("Enter The Elements\n");
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    printf("Enter the Number to be searched\n");
    scanf("%d",&num);
    beg=0;
    end=n-1;
    while(beg<=end)
    {   mid=((beg+end)/2);
        if(a[mid]==num)
        {   pos=mid;
            found=1;
            break;
        }
        else if(a[mid]>num)
        {   end=mid-1;
        }
        else
        beg=mid+1;


    }

    if(found==1)
    {   printf("Value Found at  %d  position\n",pos+1);
    }
    else
    printf("VALUE NOT FOUND !\n");

return 0;}
