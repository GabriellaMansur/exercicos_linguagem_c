#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int matriz [5][5] = {0};

    for(int x = 0; x<5; x++){
        for(int y = 0; y<5; y++){
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
    return 0;
}






// digitar a altura de tres pessoas e fazer a media
int main()
{
    float alturas[3]= {0};
    float soma = 0;
    float media = 0;

    printf("Digite as tres alturas: ");
    for(int i = 0; i<3; i++){
        scanf("%f", &alturas[i]);
    }

    for(int i = 0; i<3; i++)
        soma += alturas[i];

    media = soma / 3;

    printf("A media das alturas eh %f", media);
    return 0;
}*/
