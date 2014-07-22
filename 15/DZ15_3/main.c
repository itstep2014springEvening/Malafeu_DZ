#include <stdio.h>
#include <stdlib.h>
int min(int array[],int size);
int max(int array[],int size);

int main()
{
    int size;
     printf("enter count of elements");
    scanf("%d",&size); // ia dymal tak nelzia no rabotaet C11 i C99
    int g[size];
    srand (time(NULL));
    for(int i=0; i<size; ++i)
    {
        g[i]=rand()%100+1;
        printf("%d\n",g[i]);
    }

    printf("min: %d max: %d",min(g,size),max(g,size));
    return 0;
}
int min(int array[],int size)
{
    int min = 0;
    for(int i=0; i<size-1; ++i)
    {
        if(array[min]>array[i+1])
        {
           min=i+1;
        }

    }
    return array[min];
}

int max(int array[],int size)
{
    int max = 0;
    for(int i=0; i<size-1; ++i)
    {
        if(array[max]<array[i+1])
        {
            max=i+1;
        }

    }
    return array[max];
}
