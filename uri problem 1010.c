#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,d,sum;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    sum = sqrt(pow(c-a,2)+pow(d-b,2));
    printf("%0.4lf",sum);


    return 0;
}
