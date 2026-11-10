/*
  1. Foi contactado pela empresa "XPTO, Lda." para a elaboração de um programa que permita calcular 
     o vencimento de um colaborador, bem como os descontos e impostos decorrentes desse 
     processamento salarial. Conceitos: 
        a. Vencimento base: 40€/dia. 
        b. Subsídio de alimentação: 5€/dia. 
        c. Retenção de IRS: 10%. 
        d. Segurança Social: 11% encargo do funcionário e 23,75% encargo da entidade patronal. 

    Deve ser solicitado ao utilizador o código do funcionário, e o número de dias que ele trabalhou 
    nesse mês. Deverá depois apresentar: 
      a. o valor ilíquido a receber fruto do vencimento. 
      b. total subsídio de alimentação. 
      c. valor da retenção de IRS a entregar ao estado. 
      d. valor total a entregar à Segurança Social (ambos os encargos). 
      e. valor líquido a receber pelo funcionário. 

*/


#include <stdio.h>

int main() {

  int codigo_func, dias_trabalhados;

  float vencimento = 40.0;
  float subsidio_alimentacao = 5.0; 

  printf("Introduza o codigo de funcionario: ");
  scanf("%d", &codigo_func);
  printf("Introduza o numero de dias trabalhados: ");
  scanf("%d", &dias_trabalhados);

  float vencimento_iliq = dias_trabalhados * vencimento;
  float sa = dias_trabalhados * subsidio_alimentacao;
  float retencao = vencimento_iliq * 0.10;
  float ef = (vencimento_iliq - retencao) * 0.11;
  float ep = (vencimento_iliq - retencao) * 0.2375;
  float ss = ef + ep;
  float vencimento_liq = vencimento_iliq - ss;

  printf("\nValor iliquido a receber fruto do vencimento: %.2f", vencimento_iliq);
  printf("\nTotal subsidio alimentacao: %.2f", sa);
  printf("\nValor da retencao de IRS a entregar ao estado: %.2f", retencao);
  printf("\nValor total a entregar a Seguranca Social (ambos os encargos): %.2f", ss);
  printf("\nvalor liquido a receber pelo funcionario: %.2f", vencimento_liq);

  return 0;
}