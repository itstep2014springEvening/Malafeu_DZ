#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i=2, j;
    printf("Vvedite chislo ");
    scanf ("%d", &number);
    while (j!=0)
    {
        j=number%i;
        if (j!=0)
        {
            ++i;
        };
    };
    if (i==number)
    {
        printf ("prostoe");
    }
    else
    {
        printf ("sostavnoe");
    };
    return 0;
}
