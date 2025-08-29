#include<stdio.h>
int main()
{
    int i,n,t, a[100];
    printf("enter the number of elements required in the array:\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    printf("the reversed array elements are given as:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
