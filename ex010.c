#include <stdio.h>
#include <string.h>
/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

void main()
{
  char nome[20];
  float preco, pfinal, desc;

  printf("Digite o nome do produto: ");
  fgets(nome, 20, stdin);
  printf("Qual o valor? ");
  scanf("%f", &preco);

  desc = (preco*1.10) - preco;
  pfinal = preco - desc;

  printf("Como o pagamento foi a vista, o valor de R$%.2f do %s recebe um desconto de R$%.2f e fica R$%.2f.", preco, nome, desc, pfinal);
}