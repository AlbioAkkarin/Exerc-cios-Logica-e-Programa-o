
/* 3)	Crie um programa para receber uma determinada temperatura em graus Celsius (Cº) e fazer a sua conversão para graus Fahrenheit (Fº).

Fórmula:   F = (9C + 160) / 5

*/


main(){
	float F , C ; 
	
	printf("== CONVERSOR CELSIUS PARA FAHRENHEIT ==\n\n");
	
	printf("Digite o Grau Celsius para conversao: ");
	scanf("%f", &C);
	F = (9*C + 160)/5;
	
	printf("Conversao concluida!\n\n");
	
	printf("%.2f", C);
	printf(" C convertido fica: %.2f", F);
	printf(" F");

	
}
