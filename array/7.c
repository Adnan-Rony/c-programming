/*#include<stdio.h>
int main()
{
    int a[100],sum=0,n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(int i=0; i<n; i++)
    {
        sum=sum+i;
    }
    printf("sum is %d \n",sum);

    printf("avg is %.2f \n",(float)sum/n);

    return 0;
}
*/
#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("how many number :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d\n",sum);
    printf("avg is %.2f",(float)sum/n);
    return 0;




}
