#include <stdio.h>
#include <string.h>

/*13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.
Exemplo:
  ovo
  arara
  Socorram-me, subi no ônibus em Marrocos
  Anotaram a data da maratona
*/

void main()
{
  char str[100], strC[100];
  int strLen, v, j = 0;

  printf("Digite uma frase: ");
  fgets(str, 100, stdin);
  strLen = strlen(str);

  for (int i = strLen; i >= 0; i--)
  {
    strC[j] = str[i];
    j++;
  }

  printf("%s", strC);

  for (int i = 0; i < strLen; i++)
  {
    if (str[i] != strC[i])
    {
      printf("Nao eh palindromo.");
      break;
    }
  }
  printf("Eh um palindromo.");
}