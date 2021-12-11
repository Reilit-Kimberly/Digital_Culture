#include <stdio.h>
#include <math.h>

int main()
{
    double z1,z2,m,n;
    scanf("%lf %lf", &m, &n);
    z1=((m-1)*pow(m,1./2)-(n-1)*pow(n,1./2))/(pow(pow(m, 3), 1./2)*pow(n,1./2)+n*m+pow(m, 2)-m);
    z2=(pow(m, 1./2)-pow(n,1./2))/m;
    printf("%lf %lf", z1,z2);
}
