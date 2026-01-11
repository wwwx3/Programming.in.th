#include<stdio.h>
#include<math.h>

int main(){
    
    double r;
    double pi = M_PI;
    scanf("%lf", &r);

    double taxi,euclid;

    euclid = M_PI *(r*r); 
    taxi = 2*(r*r);

    printf("%lf",euclid);
    printf("\n%lf",taxi);
    
    return 0;   
} 
