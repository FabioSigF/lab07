#include <stdio.h>
#include <string.h>
/*3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/
void main()
{
  char str[20];

  printf("Digite uma palavra: ");
  gets(str);

  printf("A palavra ao contrario fica: ");
  for (int i = strlen(str); i >= 0; i--)
  {
    printf("%c", str[i]);
  }
  
}