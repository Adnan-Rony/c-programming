#include <stdio.h>
#include<math.h>
int main()
{
    int Lucy = 3, Lucky = 12, Lamcy = 8;
    float a1, a2, a3;
    a1 = M_PI * Lucy * Lucy;
    a2 = M_PI * Lucky * Lucky;
    a3 = M_PI * Lamcy * Lamcy;
    if (a1 > 250)
        printf("Lucy\tis\nthe\twinner\n");
    if (a2 > 250)
        printf("Lucky\tis\nthe\twinner\n");
    if (a3 > 250)
        printf("Lamcy\tis\nthe\twinner\n");
    return 0;
}

