#include <stdio.h>
#include <stdlib.h>

#define premio 78000.00
int main()
{
    float ganhador1, ganhador2, ganhador3= 0;

    ganhador1 = premio*0.46;
    ganhador2 = premio*0.32;
    ganhador3 = premio -(ganhador1 + ganhador2);
    printf("Ganhador 1: %.2f\nGanhador 2: %.2f\nGanhador 3: %.2f\n", ganhador1, ganhador2, ganhador3);

    return 0;
}
