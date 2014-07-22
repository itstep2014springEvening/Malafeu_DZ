void spin (int a)
{ switch(a)
    { case 1:
        printf("...\n.#.\n...\n");
         break;
    case 2:
        printf("#..\n...\n..#");
         break;
    case 3:
        printf("#..\n.#.\n..#");
         break;
         case 4:
        printf("#.#\n...\n#.#\n");
         break;
    case 5:
        printf("#.#\n.#.\n#.#");
         break;
    case 6:
        printf("#.#\n#.#\n#.#");
         break;

    }
    printf("\n");
     printf("\n");

}

Sum(int a,int b)
{if(a==b){ return (a+b)*2;}
    else {return a+b;}

}
