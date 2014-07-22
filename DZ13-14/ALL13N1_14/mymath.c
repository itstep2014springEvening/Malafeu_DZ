int mygcd(int a, int b)
{
    int temp;
    do
    {
        temp=a%b;
        a=b;
        b=temp;

    }
    while(temp);
    return a;
}

int mylcm(int a, int b)
{
    return (a/mygcd(a,b))*b/mygcd(a,b);
}

double mypow(double q, int p)
{ double r =1;
if (p<0){q=1/q; p=-p;}
if (p==0){return 1;}
 while (p!=0)
    {
        if (p%2==1)
        {
            r *= q;

        }
        q*=q;
        p/=2;
    }
    return r;
}

void Sieve(int n)
{
    int s, c;

    for(s=1; s<=n; ++s)
    {
        for(c=1; c<=n; ++c)
        {
            printf("%c",mygcd(s, c)==1?'#':'0');
        }
        printf("\n");
    }

}

int myfactorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*myfactorial(n-1);
    }
}
