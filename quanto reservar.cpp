#include <iostream>

int main(int argc, char** argv) {
	float gasto_mensal, valor_reservar, valor_jadepositado, falta_depositar;
	
	printf("Digite aqui o quanto você gasta por mês: \n");
	scanf("%f", &gasto_mensal);
	
	valor_reservar = gasto_mensal * 6;
	
	printf("Você precisa reservar: R$: %.2f", valor_reservar);
	
	printf("\nQuantos reais você tem depositado de emergência na sua conta, hoje?: ");
	scanf("%f", &valor_jadepositado);
	
	printf("\n\nAguarde\n\n...");
	
	falta_depositar = valor_reservar - valor_jadepositado;
	
	if (valor_jadepositado < valor_reservar) {
		printf("Você precisa depositar R$: %.2f", falta_depositar);
	} else {
		printf ("\n Você já tem o suficiente para sua reserva de emergência, parabéns!");
	}
	
	return 0;
}
