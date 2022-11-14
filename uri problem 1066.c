
#include <stdio.h>

int main()
{
    int k,a,b=0,c=0,i=0,j=0;

    for(k=0; k<5; k++)
    {
        scanf("%d",&a);
        if(a%2==0)
            i++;
        else j++;
        if(a>0)
            b++;
        else if(a<0) c++;
    }
    printf("%d valor(es) par(es)\n",i);
    printf("%d valor(es) impar(es)\n",j);
    printf("%d valor(es) positivo(s)\n",b);
    printf("%d valor(es) negativo(s)\n",c);


    return 0;
}
