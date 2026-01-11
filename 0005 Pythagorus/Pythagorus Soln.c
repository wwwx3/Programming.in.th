#include <stdio.h>
#include <math.h>

int main() {

    double a,b;
    scanf("%lf %lf", &a, &b);
    double ans = pow(a,2)+pow(b,2);
    double value = sqrt(ans);

    printf("%lf",value);
    
    return 0;
}
