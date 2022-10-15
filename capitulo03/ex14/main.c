#include <stdio.h>
#include <stdlib.h>

int main()
{
    int caractere;

    printf("Digite um caractere: ");
    caractere = getchar();
    caractere -= 32;
    printf("\nLetra maiuscula %c\n", caractere);
    return 0;
}
