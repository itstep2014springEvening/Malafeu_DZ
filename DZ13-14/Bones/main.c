#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int UserScore=0;
    int CompScore=0;
    int User1, Comp1;
    int User2, Comp2;
    char ans;


    srand(time(NULL));
    User1=rand()%6+1;
    User2=rand()%6+1;
    UserScore = UserScore+Sum(User1,User2);
    Comp1=rand()%6+1;
    Comp2=rand()%6+1;
    CompScore = CompScore+Sum(Comp1,Comp2);
    printf("User:\n");
    spin(User1);
    spin(User2);
    printf("Computer:\n");
    spin(Comp1);
   spin(Comp2);
    printf("%d %d\n ",UserScore,CompScore);
    if(UserScore>CompScore)
    {
        printf("Win!");
    }

    return 0;

}
