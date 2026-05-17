


main(){
	float LADO, AREACIRC , AREAQUADRADO,  AREATRIANG , AREATOTAL, PERICIRC, PERIMRESTANTE, PERIMTOTAL ; 
	
	printf("== Quadra Esportiva ==\n\n");
	
	printf("Este programa tem como objetivo calcular a area de uma quadra esportiva.\n");
	printf("Digite para a gente somente o comprimento de um lado da quadra ate o outro: \n\n");
		scanf("%f", &LADO);
		
	AREACIRC = (3.14 * LADO/2 * LADO/2)/2;
	AREAQUADRADO = LADO * LADO;
	AREATRIANG =( LADO * LADO * sqrt(3))/4;
	AREATOTAL= AREACIRC + AREAQUADRADO + AREATRIANG;
	PERICIRC= (2* 3.14 * LADO/2)/2;
	PERIMRESTANTE = 4*LADO;
	PERIMTOTAL = PERICIRC + PERIMRESTANTE;
	
	printf("concluido!\n\n");
	
	printf("A area total da quadra:  %.1f", AREATOTAL);
	printf(" metros. \n\n");
	printf("O perimetro da quadra: %.1f", PERIMTOTAL);
	printf(" metros.");

	
}

