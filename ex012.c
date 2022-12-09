#include <stdio.h>
#include <string.h>

/*12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

void main()
{
  char str[100];
  int strLen, v;

  printf("Digite uma frase: ");
  fgets(str, 100, stdin);
  strLen = strlen(str);

  for (int i = 0; i < strLen; i++)
  {
    v = str[i];
    if (v >= 65 && v <= 90)
    {
      if (v >= 88)
      {
        str[i] = 65 + (2 - (90 - v));
      }
      else
      {
        str[i] = v + 3;
      }
    }
    else if (v >= 97 && v <= 122)
    {
      if (v >= 120)
      {
        str[i] = 97 + (2 - (122 - v));
      }
      else
      {
        str[i] = v + 3;
      }
    }
  }

  printf("%s", str);
}