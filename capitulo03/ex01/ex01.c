#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nO antecessor eh %d e o sucessor eh %d\n", num-1, num+1);
    return 0;
}
