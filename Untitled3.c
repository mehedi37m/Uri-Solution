#include <stdio.h>

int main()
{
 int s, hours, minutes, seconds;
 scanf("%d",&s);

 hours = s/3600;
 s = s%3600;
 minutes = s /60;
seconds = s%60;

 printf("%d:%d:%d\n", hours, minutes, seconds);

 return 0;
}
