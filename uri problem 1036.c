#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y,m;
    scanf("%f%f%f",&a,&b,&c);
    if (a == 0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    m = b*b - 4*a*c;
    if(m>=0)
    {
        x=(-b+sqrt(m))/(2*a);
        y=(-b-sqrt(m))/(2*a);

        printf("R1 = %0.5f\n",x);
        printf("R2 = %0.5f\n",y);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
