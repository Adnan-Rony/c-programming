

/*#include<stdio.h>
int main(){
    int a=1,b=2,c=3,d=4,e=5,f=6,sum,sum1,sum2,sum3;
    //scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    sum1=a+b;
sum2=c+d;
sum3=e+f;
sum=sum1+sum2+sum3;
printf("%d+%d=%d\n%d+%d=%d\n%d+%d=%d\n%d+%d=%d\n%d+%d+%d=%d",a,b,sum1,c,d,sum2,e,f,sum3,sum1,sum2,sum3,sum);
return 0;
}
*/
#include<stdio.h>
int main()
{
    int a=3,b=2,c=6,d=4,e=5,f=1,sum,sum1,sum2,sum3;
    sum1=a+b;
    sum2=c+d;
    sum3=e+f;
    sum=sum1+sum2+sum3;
    printf("%d+%d=%d\n%d+%d=%d\n%d+%d=%d\n%d+%d+%d=%d",a,b,sum1,c,d,sum2,e,f,sum3,sum1,sum2,sum3,sum);
    return 0;
}
