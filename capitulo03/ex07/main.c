#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, cotacao_dolar;
    float conversao;

    printf("Digite um valor em reais e a atual cotacao do dolar: ");
    scanf("%f%f", &real, &cotacao_dolar);
    conversao = real * cotacao_dolar;
    printf("O valor correspondente em dolares eh:%.2f ", conversao);


    return 0;
}
