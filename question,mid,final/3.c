// Online C compiler to run C program online
#include <stdio.h>

int main() {
float bat,ball;
scanf("%f%f",&bat,&ball);
if(bat<40 && ball<30)
    printf("select as alrounder");
else if(bat<50)
    printf("select as batsman");
    else if(ball<25)
       printf("select as bowler");
       else
          printf("do not select");
    return 0;
}
