#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("how many number :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("maximum number :%d",max);
int min=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("manimum number :%d",min);



}
