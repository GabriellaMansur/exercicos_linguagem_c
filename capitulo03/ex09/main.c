#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{
    float graus, rad;

    printf("Digite um angulo em graus: ");
    scanf("%f", &graus);
    rad = (graus*pi)/180;
    printf("\nO angulo em radianos eh: %f\n", rad);

    return 0;
}
