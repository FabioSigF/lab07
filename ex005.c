#include <stdio.h>

/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

void main()
{
  char str[20], strLen;
  int v;
  printf("Digite uma palavra: ");
  gets(str);

  strLen = strlen(str);

  for (int i = 0; i < strLen; i++)
  {
    v = str[i];
    if (v >= 65 && v <= 90)
    {
      str[i] = v + 32;
    }
  }

  printf("A palavra em letras minusculas fica: %s", str);
}