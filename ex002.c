#include <stdio.h>

/*2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo: “0011001” -> 3 */

void main()
{
  char str[11];
  int cont = 0;
  printf("Digite uma string de 10 digitos: ");
  gets(str);

  for (int i = 0; i < 10; i++)
  {
    if(str[i] == '1')
    {
      cont++;
    }
  }
  
  printf("Foram encontrados %d numeros 1 na string.", cont);
}