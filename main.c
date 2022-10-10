#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aa, an, idade;
    //trabalhando com tamanho de campos aula 06
    /*printf("%d \n", 6);
    printf("%5d \n", 6); // aparece o mesmo número, mas em lugar diferente
    printf("Meu nome eh %9s \n", 'Gabriella');*/
     printf("Digite o ano atual \n");
     scanf("%i", &aa);

     printf("Digite o seu ano de nascimento \n");
     scanf("%d", &an);

     idade=aa-an;

     printf("A sua idade eh: %i", idade);

}
