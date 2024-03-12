#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	
	setlocale(LC_ALL, "");
	
	float valorInvestido = 0;
	int periodo = 0;
	float percentualRendimento = 0;
	
	printf("Digite  valor investido\n");
	scanf("%f", &valorInvestido);
	printf("Digite a quantidade de meses do investimento\n");
	scanf("%d", &periodo);
	printf("Digite o percentual de rendimento ao mês\n");
	scanf("%f", &percentualRendimento);
	
	// Calcula os rendimentos mês a mês
    for (int i = 1; i <= periodo; i++) {
        valorInvestido += valorInvestido * (percentualRendimento / 100);
        printf("Mês %d - Saldo: R$%.2f\n", i, valorInvestido);
    }

    // Calcula o imposto de 15% sobre o lucro
    float lucro = valorInvestido - valorInvestido / (1 + (percentualRendimento / 100));
    float imposto = lucro * 0.15;
    float saldoFinal = valorInvestido - imposto;

    printf("Valor Saldo Final após %d meses: R$%.2f\n", periodo, saldoFinal);

    return 0;
 
}
