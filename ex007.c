#include <stdio.h>
#include <string.h>'
/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

void main()
{
  char vet[100];
  int vetLen;

  printf("Digite uma frase: ");
  fgets(vet, 100, stdin);
  vetLen = strlen(vet);
  for(int i = 0; i < vetLen; i++)
  {
    if(vet[i] == ' ')
    {
      for (int j = 0; j < vetLen; j++)
      {
        vet[i] = vet[i+1];
      }
    }
  }
  printf("A frase espacos fica: %s", vet);
}