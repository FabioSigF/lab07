#include <stdio.h>

/*6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.*/

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
    if(v >= 97 && v <= 122)
    {
      str[i] = v - 32;
    }
  }

  printf("A palavra em letras minusculas fica: %s", str);
}