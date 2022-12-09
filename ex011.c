#include <stdio.h>
#include <string.h>
/*11. Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o
segmento S[I..J].*/

void main()
{
  char str[100];
  int p1, p2, strLen;

  printf("Digite uma frase: ");
  fgets(str, 100, stdin);
  strLen = strlen(str);
  printf("Digite o numero inicial entre 0 e %d: ", strLen);
  scanf("%d", &p1);
  printf("Digite o segundo numero entre 0 e %d: ", strLen);
  scanf("%d", &p2);

  if((p1 > strLen) || (p1 < 0) || (p2 > strLen) || (p2 < 0))
  {
    printf("Valor invalido. FIM DO PROGRAMA!");
  }
  else
  {
    if(p1 < p2)
    {
      printf("As string entre as posicoes %d e %d e:\n", p1, p2);
      for (int i = p1; i <= p2; i++)
      {
        printf("%c", str[i]);
      }
    }
    else {
      printf("As string entre as posicoes %d e %d e:\n", p2, p1);
      for (int i = p2; i <= p1; i++)
      {
        printf("%c", str[i]);
      }
    }
  }
}