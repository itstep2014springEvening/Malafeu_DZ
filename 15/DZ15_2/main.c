#include <stdio.h>
#include <stdlib.h>
int LinearSearch (int A[],  int R, int Key);
int main()
{
    int a[5];
    for(int i=0; i<5; ++i)
    {
        scanf("%d",&a[i]);
    }
    int key;
     printf("enter element");
    scanf("%d",&key);

    int c = LinearSearch (a,  5, key);
    printf("%d-d element",c+1);
    return 0;
}
int LinearSearch (int A[],  int R, int Key)
{
    for (int L = 0; L<R; ++L)
    {
        if (A[L] == Key)
        {
            return L;
        }
    }
    return -1;
}
