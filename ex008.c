#include <stdio.h>
#include <string.h>
/*8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

void main()
{
  char str[100], l, n;
  int strLen;

  printf("Digite uma frase: ");
  fgets(str, 100, stdin);
  strLen = strlen(str);

  printf("Qual letra voce quer trocar? ");
  scanf(" %c", &l);
  printf("Qual letra ficarah no lugar? ");
  scanf(" %c", &n);

  for (int i = 0; i < strLen; i++)
  {
    if(str[i] == l){
      str[i] = n;
    } 
  }
  
  printf("A frase fica: %s", str);
}