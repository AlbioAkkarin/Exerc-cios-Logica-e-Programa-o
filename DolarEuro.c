// Quando tentei usar esse algoritmo, ele confundiu com o conversor em graus

#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	float CAMBEURO, CAMBDOLAR, VALREAL, VALDOLAR , VALEURO ; 
	
	printf("== Conversor de Real em Dolar/Euro ==\n\n");
	
	printf("Informe a taxa de cambio para dolar do dia de hoje:\n");
		scanf("%f", &CAMBDOLAR);
	printf("Informe a taxa de cambio para euro do dia de hoje:\n");
		scanf("%f", &CAMBEURO);
	printf("Informe o valor em real para a conversao:\n");
		scanf(" %f", &VALREAL );	
		
	VALDOLAR = VALREAL / CAMBDOLAR;
	VALEURO = VALREAL / CAMBEURO;

	
	printf("Conversao concluida!\n\n");
	
	printf("Em dolar:  %.1f", VALDOLAR);
	printf(" dolares. \n\n");
	printf("Em Euro: %.1f", VALEURO);
	printf(" euros.");

	
}

