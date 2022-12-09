#include <stdio.h>
#include <string.h>

/*14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’*/

void main()
{
  char str1[100], str2[100], strNum[100];
  int num, strLen1, strLen2;
  printf("Digite a primeira frase: ");
  gets(str1);
  printf("Digite a segunda frase: ");
  gets(str2);
  printf("Digite a quantidade de caracteres da segunda string que iremos concatenar: ");
  scanf("%d", &num);

  strLen1 = strlen(str1);
  strLen2 = strlen(str2);

  if (num <= strLen2)
  {
    for (int i = 0; i < num; i++)
    {
      strNum[i] = str2[i];
    }
    strcat(str1, strNum);

    printf("A frase fica assim: %s", str1);
  }
  else
  {
    puts("Numero invalido, eh maior que a quantidade de caracteres da frase. FIM DO PROGRAMA!");
  }
}