#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

/* Questão: Desenvolva um programa em C que permita ao usuário realizar diversas 
operações com um array de números inteiros. O programa deve apresentar 
um menu com as seguintes opções: */

int array[10];

/* 1- Cadastrar 10 números no array */
int cadastrarArray (int i){
	
	for(i=0; i<10; i++){
	printf ("Digite 10 números inteiros: [%d]: ",i);
	scanf ("%d", &array [i]);
	}
	printf("\n");
	printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");
}
 
/* 2- Mostrar os valores do array: */
int MostrarArray (int i){

    printf("Valores do array: \n");
    for (int i = 0; i < 10; i++) {
    printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");
}

/* 4- Mover os números do array para a direita: */
int direita (int i){
	
    int temp = array[9];
    for (i = 8; i >= 0; i--) {
    array[i + 1] = array[i];
    }
    array[0] = temp;
    printf("Array movido para a direita com sucesso!\n");
    for (int i = 0; i < 10; i++) {
    printf("%d ", array[i]);
}
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");
}

/* 5- Mover os números do array para a esquerda: */
int Esquerda (int i){
	
int temp = array[0];
    for (int i = 1; i < 10; i++) {
        array[i - 1] = array[i];
    }
    array[9] = temp;
    printf("Array movido para a esquerda com sucesso!\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");
}

/* 6- Inverter a ordem dos números no array: */
int inverterArray (int i){

    int temp;
    for(i = 0; i < 5; i++) {
    temp = array[i];
    array[i] = array[9 - i];
    array[9 - i] = temp;
    }
    printf("Array invertido com sucesso!\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");
}

/* 7- Mostrar o valor de uma posição específica do array: */
int Posicao (int i){

    int posicao;
    printf("Digite a posição do array que deseja mostrar: ");
    scanf("%d", &posicao);
    
	if (posicao < 0 || posicao > 9) {
    printf("Posição inválida!\n");
    } 
	
	else {
	printf("O valor da posição %d é %d.\n", posicao, array[posicao]);
    }
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");
}

/* 3- Limpar o array (setar todos os valores para 0): */
int LimparArray (int i){

    for (int i = 0; i < 10; i++) {
        array[i] = 0;
    printf("MENSAGEM RECEBIDA: Array limpo com sucesso!\n");
	}
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");
}

/* n8- Sair do programa */
int sair (int i){
	
	printf("Programa encerrado.\n");
	
	printf("\n");
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	int i=0;

    do {
	printf ("MENU: \n");
	printf ("1- Cadastrar 10 números no array: ");
	printf ("\n2- Mostrar os valores do array: ");
	printf ("\n3- Mover os números do array para a direita: ");
	printf ("\n4- Mover os números do array para a esquerda: ");
	printf ("\n5- Inverter a ordem dos números no array: ");
	printf ("\n6- Mostrar o valor de uma posição específica do array: ");
	printf ("\n7- Limpar o array (setar todos os valores para 0): ");
	printf ("\n8- Sair do programa: ");
	
	printf("\n\nInforme a opção desejada: ");
    scanf ("%d", &opcao);{
    printf("\n");
    printf("---------------------------------------------------------");
    printf("\n");
	printf("\n");}

	switch (opcao){

	case 1:
 		cadastrarArray (i);
 	break;

	case 2:
		MostrarArray (i);
	break;
	
	case 3:
		direita (i);
	break;

	case 4:
		Esquerda (i);
	break;

	case 5:
		inverterArray (i);
	break;
	
	case 6:
		Posicao (i);
	break;
	
	case 7:
		LimparArray (i);
	break;
	
	case 8:		   
		sair (i);
	break;
	
	default:
		printf("\nERRO! O comando digitado é invalido. Favor digitar novo comando!\n\n\n");
	break; 
	}
	
	} while (opcao != 8);
	
	return 0;
}
