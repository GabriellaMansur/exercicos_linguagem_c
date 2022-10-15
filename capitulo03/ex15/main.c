#include <stdio.h>
#include <stdlib.h>

int inverter(int num);

int main()
{
    int num;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);
    num = inverter(num);
    printf("\nO numro invertido eh %d", num);
    return 0;
}
int inverter(int num){
int aux = 0;
while (num> 0) {
    aux*=10;
    aux += num%10;
    num/+10;
}
    return aux;



}
