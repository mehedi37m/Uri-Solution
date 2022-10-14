#include<stdio.h>

int main()
{
    int x,y;
    float s = 0;
    scanf("%d%d",&x,&y);

    if (x==1)
    {
        s = (y*4.00);
    }
    else if (x==2)
    {
        s = (y*4.50);
    }
    else if (x==3)
    {
        s = (y*5.00);
    }
    printf("Total: R$ %.2f\n",s);
    return 0;
}
