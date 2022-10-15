#include <stdio.h>
#include <stdlib.h>


int main()
{
    int idade, ano_nasc, ano_atual = 0;

    printf("Digite a sua idade e o ano atual: ");
    scanf("%d%d", &idade, &ano_atual);
    ano_nasc = ano_atual - idade;
    printf("O seu ano de nascimento eh %d", ano_nasc);

    return 0;
}
