#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, F;

    printf("Digite uma temperatura em gaus celsius: ");
    scanf("%f", &celsius);

    F = celsius * (9.0/5.0) + 32;

    printf("\nA temperatura correspondente em  Fahrenheit eh %.2f\n", F);
    return 0;
}
