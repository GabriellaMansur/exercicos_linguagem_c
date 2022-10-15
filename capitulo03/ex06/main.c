#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velocidade_km, velocidade_ms;

    printf("Digite uma velocidade em km h: ");
    scanf("%f", &velocidade_km);
    velocidade_ms = velocidade_km/3.6;
    printf("A velociade em m s eh: %.2f ", velocidade_ms);
    return 0;
}
