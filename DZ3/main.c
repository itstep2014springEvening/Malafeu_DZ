#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf ("enter a\n");
    scanf ("%d", &a);
    printf ("enter b\n");
    scanf ("%d", &b);
    printf ("%d + %d = %d\n", a, b, a+b);
    printf ("%d - %d = %d\n", a, b, a-b);
    printf ("%d * %d = %d\n", a, b, a*b);
    if (b!=0)
    {
        printf ("%d / %d = %d\n", a, b, a/b);
        printf ("%d %% %d = %d\n", a, b, a%b);
    }
    else
    {
        printf ("error");
    };
    return 0;
}
