#include <stdio.h>
#include <string.h>

/*13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.
Exemplo:
  ovo
  arara
*/

void main()
{
  char str[100], strR[100];
  int strLen, j = 0, verif;

  printf("Digite uma frase: ");
  gets(str);
  strLen = strlen(str) - 1;

  for (int i = strLen; i >= 0; i--)
  {
    strR[j] = str[i];
    j++;
  }

  for (int i = 0; i < strLen; i++)
  {
    if (str[i] != strR[i])
    {
      verif = 0;
      break;
    }
  }

  if (verif == 0)
  {
    printf("Nao eh palindrom.");
  }
  else
  {
    printf("Eh um palindromo.");
  }
}