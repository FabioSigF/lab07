#include <stdio.h>
#include <string.h>

/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.*/

void main()
{
  char str[20], v, vs;
  int cont = 0, strLen;

  printf("Digite uma palavra: ");
  gets(str);

  printf("Digite um caractere para substituir essas vogais: ");
  scanf("%c", &vs);
  strLen = strlen(str);

  for (int i = 0; i < strLen; i++)
  {
    v = str[i];
    printf("%c", v);
    switch (v)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      cont++;
      str[i] = vs;
      break;

    default:
      break;
    }
  }

  printf("Foram encontradas %d vogais. Ao substituir por %c, temos: %s", cont, vs, str);
}