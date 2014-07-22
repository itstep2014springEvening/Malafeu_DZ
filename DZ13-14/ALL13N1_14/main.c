#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"

int main()
{
    printf("gcd: %d lcm; %d\n" , mygcd(81,9), mylcm(81,9));
    printf("%.20f\n", mypow(10,-2));
    Sieve(4);
    printf("%d\n",myfactorial(6));

    return 0;
}
