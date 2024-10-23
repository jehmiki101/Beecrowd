#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b)
{
    return (a + b + abs(a - b))/2;
}
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maiorAB = maior(a, b);
    int maiorFinal = maior(maiorAB, c);

    printf("%d eh o maior\n", maiorFinal);

    return 0;
}