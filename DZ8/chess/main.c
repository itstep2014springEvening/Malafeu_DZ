#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf ("Enter  m ");
    scanf ("%d", &m);
    printf ("Enter n ");
    scanf ("%d", &n);
   int i;
   int j;
    for (i=0; n>i; ++i)
    {
        for (j=1; m>=j; j+=2)
        {
            if (i%2==0)
            {
                printf ("*");
                if (m>j)
                {
                    printf (" ");
                };
            }
            else
            {
                printf (" ");
                if (m>j)
                {
                    printf ("*");
                };

            };
        };
        printf ("\n");
    };
    return 0;
}
