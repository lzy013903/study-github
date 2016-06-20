#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len,temp;
    int arr[1000];
    int i,j,k;

    while(scanf("%d",&len)!=EOF)
    {
        for(i=0;i<len;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(arr[j]==arr[i])
                {
                    for(k=j;k<len;k++)
                        arr[k]=arr[k+1];
                    j--;
                    len--;
                }
            }
        }
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        for(i=0;i<len;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}