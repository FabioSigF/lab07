#include <stdio.h>

/*1. Faça um programa que leia uma string e a imprima.*/

void main()
{
  char str[20];
  printf("Escreva uma frase de ate 20 caracteres: ");
  gets(str);

  printf("A frase escrita foi: \"%s\".", str);
}