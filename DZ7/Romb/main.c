#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,  i, j;

    printf("enter number");
    scanf("%d",&a);

    for(i=0; i<=a*2; i++)
    {
        for(j=0; j<=a*2; j++)
        {
            if (abs(i-a)+abs(j-a)<=a/2)
            {
                printf("#");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
