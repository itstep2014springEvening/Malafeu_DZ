#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    printf("������� �����\n");
    int number;
    scanf("%d",&number);
    int t = number;
    int result=0;
    do
    {
        result=(result*10)+(t%10);


    }
    while(t=t/10);
    if(number==result){printf("���������!\n");}
    else {printf("�� ���������!\n");}
    return 0;
}
