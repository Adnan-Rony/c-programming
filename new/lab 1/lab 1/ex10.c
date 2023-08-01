#include <stdio.h>

int main( void )
{
    int a, b, c, d, l, s, e;


    printf( "Enter four integers:\n" );
    scanf( "%d %d %d %d", &a, &b, &c, &d );


    l = s = a;

    if ( l < b )
    {
        l = b;
    }
    else if ( b < s )
    {
        s = b;
    }
    if ( l < c )
    {
        l = c;
    }
    else if ( c < s )
    {
        s = c;
    }
    if ( l < d )
    {
        l = d;
    }
    else if ( d < s )
    {
         s = d;
    }

    printf( "\nLargest: %d\n", l );
    printf( "Smallest: %d", s  );

    e = l + s;

    if (e>5 && e<9){
        printf("\n'Ground'");
    }
    else if (e>=9){
        printf("\n'Roof'");
    }
    if (e<6){
        printf("\n'Too small'");
    }

    return 0;
}
