#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, z, Distance;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    z = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    Distance = sqrt(z);
    printf("%0.4lf\n", Distance);
    return 0;
}
