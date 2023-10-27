#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*voc� deve implementar a finaliza��o do c�digo para realiza��o do c�lculo de juros compostos. 
  O rendimento deve ser mostrado m�s a m�s como visto no exemplo, e no final mostrar o saldo atualizado e o saldo final 
  menos 15% de imposto sobre o rendimento.*/
  
  setlocale(LC_ALL, "");
  float valorInvestido = 0;
  float saldoRendido = 0;
  int periodo = 0;
  int i;
  float percentualRendimento = 0;
  float resultadoSoma;
  float saldoFinal;
  float saldoRendidoT;
  
  printf("Digite o valor investido \n");
  scanf("%f", &valorInvestido);
  printf("Digite a quantidade de meses do investimento \n");
  scanf("%d", &periodo);
  printf("Digite o percentual de rendimento ao m�s \n");
  scanf("%f", &percentualRendimento);
  
  	  	
  for (i = 1; i<=periodo ; i++)
 {
 	saldoRendido = valorInvestido*percentualRendimento/100;  	
 	saldoRendidoT+=saldoRendido;
 	valorInvestido+=saldoRendido;
  	printf("Depois do m�s %d" " voc� ter� = R$ %.2f \n" "\n", i, valorInvestido);
  	 	
 }
  
  valorInvestido-= (saldoRendidoT/100)*15;
  printf("Ao final de %i" " meses investindo, voc� ter� = R$ %.2f",periodo, valorInvestido);
  return 0;
}
