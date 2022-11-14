
#include <stdio.h>

int main()
{
    float n,m=0,s;
    int a,c=0;
    for(a=0; a<6; a++)
    {
        scanf("%f",&n);
        if(n>0)
        {
            m = m+n;
            c++;
        }
    }
    printf("%d valores positivos\n",c);
    s = m/c;
    printf("%.1f\n",s);
    return 0;
}
