#include <stdio.h>

int main()
{

    int a,c=0,m;

    scanf("%d",&a);

    if(a%2==1)
    {
        a = a+1;
    }

    for(int i =2; i<=a; i=i+2)
    {
        m = i;

        printf("%d^2 = %d\n",m,m*m);
    }


    return 0;
}
