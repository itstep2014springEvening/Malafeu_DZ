#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i=2;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ", i);
            n/=i;
        }
        else
        {
            ++i;
        };
    };
    return 0;
}
