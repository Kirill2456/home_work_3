#include <stdio.h>
#include <float.h>
int main()
{
printf("perepolnenie char\n");
char sim = 'A';
printf("%c\n",sim);
sim = sim + 255;
printf("%c\n",sim);
printf("perepolnenie double\n");
double o = DBL_MAX;
double p = DBL_MAX;
printf("0 = %f p =%f\n",o,p);
printf("rezultat = %f\n",o*p);
printf("umnozgenie chisla a\n");
int a;
printf("vvedite a\n");
int  z,x,c,v,k;
scanf("%d",&a);
x=a*a;
c=x*x;
z=c*c;
k=z*x;
printf("chislo v 10-oi stepeni %d\n",k);

return 0;
}
