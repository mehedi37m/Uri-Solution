#include <stdio.h>

int main()
{
    float n;
    int a,c=0;
    for(a=0; a<6; a++)
    {
        scanf("%f",&n);
        if(n>0)
        {

            c++;
        }
    }
    printf("%d valores positivos\n",c);

    return 0;
}
