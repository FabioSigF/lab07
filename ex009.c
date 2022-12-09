#include <stdio.h>
#include <string.h>
void main() {
    char carros[5][20];
    int consumo[5];
    int eco, calc;
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o nome do carro: ");
        scanf(" %s", carros[i]);
        printf("Digite quantos km/l o carro faz: ");
        scanf("%d", &consumo[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            eco = i;
        }
        else if (consumo[i] > consumo[eco])
        {
            eco = i;
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        calc = 1000/(consumo[i]);
        printf("O %s faz %d km por litro. Em 1000km, consome %d litros.\n", carros[i], consumo[i], calc);
    }
    printf("O carro mais economico foi %s, faz %d km por litro.", carros[eco], consumo[eco]);
}