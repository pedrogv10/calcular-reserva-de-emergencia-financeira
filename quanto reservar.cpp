#include <iostream>

int main(int argc, char** argv) {
	float gasto_mensal, valor_reservar, valor_jadepositado, falta_depositar;
	
	printf("Digite aqui o quanto voc� gasta por m�s: \n");
	scanf("%f", &gasto_mensal);
	
	valor_reservar = gasto_mensal * 6;
	
	printf("Voc� precisa reservar: R$: %.2f", valor_reservar);
	
	printf("\nQuantos reais voc� tem depositado de emerg�ncia na sua conta, hoje?: ");
	scanf("%f", &valor_jadepositado);
	
	printf("\n\nAguarde\n\n...");
	
	falta_depositar = valor_reservar - valor_jadepositado;
	
	if (valor_jadepositado < valor_reservar) {
		printf("Voc� precisa depositar R$: %.2f", falta_depositar);
	} else {
		printf ("\n Voc� j� tem o suficiente para sua reserva de emerg�ncia, parab�ns!");
	}
	
	return 0;
}
