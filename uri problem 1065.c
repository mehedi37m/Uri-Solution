
#include <stdio.h>

int main()
{
    int a,b,c,d,e,i=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a%2==0)
        i = i+1;

    if(b%2==0)
        i = i+1;

    if(c%2==0)
        i = i+1;

    if(d%2==0)
        i = i+1;

    if(e%2==0)
        i = i+1;


    printf("%d valores pares\n",i);



    return 0;
}
