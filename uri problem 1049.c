#include <stdio.h>

int main()
{
    char a[15],b[15],c[15];
    scanf("%s%s%s",a,b,c);

    if (a[9] == 'o' && b[0] =='a' && c[3] =='n')
    {
        printf("aguia\n");
    }
    if (a[9] =='o'&& b[0] =='a'&& c[3] =='v')
    {
        printf("pomba\n");
    }
    if (a[9] == 'o'&& b[0] == 'm'&& c[0] =='o')
    {
        printf("homem\n");
    }
    if (a[9] == 'o'&& b[0] =='m'&& c[0] =='h')
    {
        printf("vaca\n");
    }

    if (a[0] == 'i' && b[0] =='i' && c[3] =='a')
    {
        printf("pulga\n");
    }
    if (a[0] =='i'&& b[1] =='n'&& c[3] =='b')
    {
        printf("lagarta\n");
    }
    if (a[0] == 'i'&& b[0] == 'a'&& c[0] =='h')
    {
        printf("sanguessuga\n");
    }
    if (a[0] == 'i'&& b[0] =='a'&& c[0] =='o')
    {
        printf("minhoca\n");
    }



    return 0;
}
