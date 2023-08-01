
/*#include<stdio.h>
int main(){
    int a,b,x,y,sum;
    scanf("%d%d",&x,&y);
    sum=a+b+x+y;
    printf("%d+%d+%d+%d=%d",a,b,x,y,sum);

return 0;
}
*/
#include <stdio.h>
int main() {

    int number1, number2,number3,number4, sum;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &number1, &number2,&number3,&number4);

    // calculating sum
    sum = number1 + number2+number3+number4;

    printf("%d + %d +%d +%d= %d", number1, number2,number3,number4, sum);
    return 0;
}
