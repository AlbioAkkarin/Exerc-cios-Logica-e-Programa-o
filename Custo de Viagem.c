

#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	float KML, CUSTO, DIST, VALORPL , VALORVG ; 
	
	printf("== Conversor de Real em Dolar/Euro ==\n\n");
	
	printf("Informe a:\n");
		scanf("%f", &KML);
	printf("Informe o custo da gasolina/alcool:\n");
		scanf("%f", &CUSTO);
	printf("Informe a distancia em KM de onde voce esta ate o ponto de chegada:\n");
		scanf(" %f", &DIST);	
		
	VALORPL = CUSTO/KML;
	VALORVG = VALORPL*DIST;
	
	printf("concluido!\n\n");
	
	printf("Seu carro consome  %.1f", VALORPL);
	printf(" reais por km. \n\n");
	printf("Essa viagem vai custar %.1f", VALORVG);
	printf(" reais no total.");

	
}

