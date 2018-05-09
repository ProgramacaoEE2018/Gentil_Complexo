#include <Complexo.h>
#include <stdio.h>


int main() {
	Complexo z1, z2, Teste;
	int erro;
	float modulo;

	erro = 0;
	z1.real = 3;
	z1.im = 4;
	z2.real = 6;
	z2.im = 8;

	//Teste Construtor
	Teste.Complexo(0, 0);
	if ( Teste.real == 0 && Teste.im == 0) {
		printf("Construtor OK");
	}
	else {
		printf("Falha Construtor");
		erro = erro + 1;
	}

	//Teste Conjugado
	Teste = z1.Conjugado();
	if (Teste.real == 3 && Teste.im == -4) {
		printf("Conjugado OK");
	}
	else {
		printf("Falha Conjugado");
		erro = erro + 2;
	}

	//Teste Diferenca
	Teste = z1 - z2;
	if (Teste.real == -3 && Teste.im == -4) {
		printf("Diferenca OK");
	}
	else {
		printf("Falha Difernca");
		erro = erro + 4;
	}
	
	//Teste Divisao
	Teste = z1 / z2;
	if (Teste.real == 0.5 && Teste.im == 0) {
		printf("Divisao OK");
	}
	else {
		printf("Falha Divisao");
		erro = erro + 8;
	}

	//Teste Modulo
	modulo = z1.Modulo();
	if ( modulo == 5) {
		printf("Modulo OK");
	}
	else {
		printf("Falha Modulo");
		erro = erro + 16;
	}

	//Teste Produto 
	Teste = z1 * z2;
	if (Teste.real == -14 && Teste.im == 24) {
		printf("Produto OK");
	}
	else {
		printf("Falha Produto");
		erro = erro + 32;
	}

	//Teste Soma
	Teste = z1 + z2;
	if (Teste.real == 9 && Teste.im == 12) {
		printf("Soma OK");
	}
	else {
		printf("Falha Soma");
		erro = erro + 64;
	}


	return erro;
}