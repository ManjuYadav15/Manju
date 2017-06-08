#include <stdio.h>
#include <math.h>

int main()
{
    double base, exponent, result;
        scanf("%lf", &base);
        scanf("%lf", &exponent);
       result = pow(base, exponent);

    printf("%.1lf^%.1lf = %.2lf", base, exponent, result);

    return 0;
}
