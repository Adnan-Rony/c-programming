#include <stdio.h>

int main()
{
    int n,seconds,hours,minutes;

    scanf("%d", &n);

    hours =n / 3600;
    //seconds = seconds - (hours * 3600);

  minutes =n%3600 / 60;
    //seconds = seconds - (minutes * 60);
    seconds=n%60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

