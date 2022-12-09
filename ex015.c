#include <stdio.h>
#include <string.h>

/*
15. Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o
resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse
ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os
caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo
usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual
posição deve ser criada a substring e qual é o tamanho da substring.
*/
void main()
{

  char str1[100], str2[100], opt, v1, v2;
  int strLen1, strLen2, calc, k = 0, l = 0, verif = 0;

  printf("Escolha uma opcao:\n [A] Ler uma frase com tamanho máximo 20 caracteres:\n [B] Imprimir o tamanho da frase:\n [C] Comparar a primeira frase com uma nova frase.\n [D] Concatenar a primeira frase com a segunda.\n [E] Imprimir a frase de forma reversa:\n [F] Contar quantas vezes o caractere digitado aparece na frase.\n [G] Substituir o primeiro caractere pelo segundo.\n [H] Verificar se a segunda frase faz parte da primeira.\n [I] Retornar um pedaco da frase.\n R= ");
  scanf(" %c", &opt);

  switch (opt)
  {
  case 'a':
  case 'A':
    printf("Digite a frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 20, stdin);
    printf("A frase lida foi: %s.", str1);
    break;
  case 'b':
  case 'B':
    printf("Digite a frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    strLen1 = strlen(str1);
    printf("O tamanho da frase digitada foi: %d", strLen1);
    break;
  case 'c':
  case 'C':
    printf("Digite a primeira frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    printf("Digite a segunda frase: ");
    setbuf(stdin, NULL);
    fgets(str2, 100, stdin);
    calc = strcmp(str1, str2);
    if (calc == 0)
    {
      printf("As frase sao iguais.");
    }
    else if (calc < 0)
    {
      printf("A primeira frase eh menor que a segunda.");
    }else if (calc > 0)
    {
      printf("A primeira frase eh maior que a segunda.");
    }
    break;
  case 'd':
  case 'D':
    printf("Digite a primeira frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    calc = strcspn(str1, "\n");
    str1[calc] = ' ';
    printf("Digite a segunda frase: ");
    setbuf(stdin, NULL);
    fgets(str2, 100, stdin);
    strcat(str1, str2);
    printf("Ao concatenar as frases, temos: %s", str1);
    break;
  case 'e':
  case 'E':
    printf("Digite a frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    printf("A frase ao contrario fica: %s", strrev(str1));
    break;
  case 'f':
  case 'F':
    printf("Digite a frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    printf("Digite a letra: ");
    scanf(" %c", &v1);
    strLen1 = strlen(str1);
    for (int i = 0; i < strLen1; i++)
    {
      if (str1[i] == v1)
      {
        k++;
      }
    }
    printf("A letra %c aparece %d vezes na frase.", v1, k);
    break;
  case 'g':
  case 'G':
    printf("Digite a frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    printf("Digite o primeiro caractere: ");
    scanf(" %c", &v1);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &v2);
    strLen1 = strlen(str1);
    for (int i = 0; i < strLen1; i++)
    {
      if (str1[i] == v1)
      {
        str1[i] = v2;
      }
    }
    printf("A frase ficou assim: %s", str1);
    break;
  case 'h':
  case 'H':
    printf("Digite a primeira frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    printf("Digite a segunda frase: ");
    setbuf(stdin, NULL);
    fgets(str2, 100, stdin);
    strLen1 = strlen(str1);
    strLen2 = strlen(str2) - 1;

    for (int i = 0; i < strLen1; i++)
    {
      if (verif == 1)
        break;

      l = 0;
      k = 0;
      for (int j = i; j < strLen1; j++)
      {
        if (l >= strLen2)
          break;
        if (str1[j] == str2[l])
        {
          k++;
        }
        l++;

        if (k == strLen2)
        {
          verif = 1;
          break;
        }
      }
    }

    if (verif == 1)
    {
      printf("A segunda frase aparece na primeira!");
    }
    else
    {
      printf("A segunda frase NAO aparece na primeira.");
    }
    break;
  case 'i':
  case 'I':
    printf("Digite uma frase: ");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);
    setbuf(stdin, NULL);
    printf("Qual a posicao inicial? ");
    scanf("%d", &k);
    printf("Quantas casa voce quer ver? ");
    scanf("%d", &l);
    for (int i = k; i < (k + l); i++)
    {
      printf("%c", str1[i]);
    }
    break;
  default:
    printf("Opcao invalida. FIM DO PROGRAMA!");
    break;
  }
}