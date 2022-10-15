#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4 = 0;
    float soma = 0;
    float media = 0;

    printf("Digite quatro numeros:    ");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    soma = num1+num2+num3+num4;

    media = soma/4;

    printf("A media dos quatro numeros digitados eh %f", media);

    return 0;
}
