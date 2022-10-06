#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,sum;
    scanf("%lf%lf",&a,&b);

    sum = (a*3.5+b*7.5)/(11.0);
    printf("MEDIA = %0.5lf\n",sum);

    return 0;
}
