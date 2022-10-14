#include<stdio.h>

int main()
{
    int a,b,c,x,y,z,s;
    scanf("%d%d%d",&x,&y,&z);
    a = x;
    b = y;
    c = z;
    if (x >y)
    {
        s = x;
        x = y;
        y = s;
    }
    if (x>z)
    {
        s = x;
        x = z;
        z = s;
    }
    if (y>z)
    {
        s = y;
        y = z;
        z = s;
    }
    printf("%d\n%d\n%d\n\n",x,y,z);
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}


