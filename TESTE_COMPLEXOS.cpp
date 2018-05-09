#include <Complexo.h>
#include <stdio.h>


int main() {
	Complexo z1(3, 4);
	Complexo z2(3, 4);
	Complexo conjugado(3, -4);
	Complexo diverenca(0, 0);
	Complexo divisao(1, 0);
	Complexo produto(-7, 24);
	Complexo soma(6, 8);
	Complexo Teste(0, 0);
	int erro;
	float modulo;

	erro = 0;
	

	//Teste Construtor
	if ( z2 == z1) {
		printf("Construtor OK\n");
	}
	else {
		printf("Falha Construtor\n");
		erro = erro + 1;
	}

	//Teste Conjugado
	Teste = z1.Conjugado();
	if (Teste == conjugado) {
		printf("Conjugado OK\n");
	}
	else {
		printf("Falha Conjugado\n");
		erro = erro + 2;
	}

	//Teste Diferenca
	Teste = z1 - z2;
	if (Teste == diverenca) {
		printf("Diferenca OK\n");
	}
	else {
		printf("Falha Difernca\n");
		erro = erro + 4;
	}
	
	//Teste Divisao
	Teste = z1 / z2;
	if (Teste == divisao) {
		printf("Divisao OK\n");
	}
	else {
		printf("Falha Divisao\n");
		erro = erro + 8;
	}

	//Teste Modulo
	modulo = z1.Modulo();
	if ( modulo == 5) {
		printf("Modulo OK\n");
	}
	else {
		printf("Falha Modulo\n");
		erro = erro + 16;
	}

	//Teste Produto 
	Teste = z1 * z2;
	if (Teste == produto) {
		printf("Produto OK\n");
	}
	else {
		printf("Falha Produto\n");
		erro = erro + 32;
	}

	//Teste Soma
	Teste = z1 + z2;
	if (Teste == soma) {
		printf("Soma OK\n");
	}
	else {
		printf("Falha Soma\n");
		erro = erro + 64;
	}


	return erro;
}