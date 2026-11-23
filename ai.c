
#include <stdio.h>
#include <math.h>

void to_polar(double x, double y, double *r, double *theta)
{
    double pi = acos(-1.0);

    *r = hypot(x, y);
    *theta = atan2(y, x) * 180.0 / pi;
}

int main(void)
{
    double x, y;
    double r, theta;

    scanf("%lf %lf", &x, &y);

    to_polar(x, y, &r, &theta);

    printf("%.3f,%.2f", r, theta);

    return 0;
}
