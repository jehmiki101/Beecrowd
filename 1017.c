#include <stdio.h>
 
int main() {

    int hours;
    int km;
    int l = 12;

    scanf("%d", &hours);
    scanf("%d", &km);

    double resultKmTotal = (double) hours * km;
    double resultLiters = resultKmTotal / l;

    printf("%.3lf\n", resultLiters);
}