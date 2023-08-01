#include <stdio.h>

int main()
{
 int n,hours,min,sec;
 scanf("%d",&n);
 hours=n/3600;
 min=n%3600/60;
 sec=n/60;
 printf("%d:%d:%d",hours,min,sec);

 return 0;
}
