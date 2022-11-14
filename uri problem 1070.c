#include <stdio.h>

int main()
{
    int i,a;
    scanf("%d",&a);
    if (a%2==0)
        a++;
    for(i = 0; i<6; i++)
    {

        printf("%d\n",a);
        a=a+2;
    }

    return 0;
}
