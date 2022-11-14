#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        b = b+24;
        b = b-a;
        printf("O JOGO DUROU %d HORA(S)\n",b);

    }
    else if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    return 0;
}
