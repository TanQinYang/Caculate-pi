#include <stdio.h>
#include <stdlib.h>

int main()
/*{
double pai,d;
pai=1;
d=2;
int i,a;
printf("Pls enter the power of 10:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
double a=d*d;
double b=(d+1)*(d-1);
    pai=pai*(a/b);
    d=d+2;

}
printf("%.20lf",pai*2);
    return 0;
}*/
{
double c,pai;
pai=0;
c=1;
int i;
for(i=1;i<=1000000;i++)
{
if (i%2!=0)
{
    pai=pai+1/c;
    c=c+2;
    continue;
}

{
    pai=pai-1/c;
    c=c+2;
}
}
printf("%.20lf",pai*4);

    return 0;
}

