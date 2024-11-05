#include <stdio.h>
#include <math.h>
 
int main() {
    double X1, Y1, X2, Y2;
    scanf("%lf %lf", &X1, &Y1);
    scanf("%lf %lf", &X2, &Y2);
    double resultOne = X2 - X1;
    double resultTwo = Y2 - Y1;

    double powOne = pow(resultOne, 2.0);
    double powTwo = pow(resultTwo, 2.0);


    double result = sqrt (powOne + powTwo);
    printf("%.4lf\n", result);

}