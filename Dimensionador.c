
/* 4)	Crie um algoritmo e o programa para ler as dimensões de um terreno de formato retangular, calcular e exibir sua área e seu perímetro.

*/


main(){
	float P , A, L, C; 
	
	printf("== Dimensionando um terreno retangular ==\n\n");
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &L);
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &C);
	A = L*C;
	P = 2*(C+L);
	
	printf("concluido!\n\n");
	
	printf("A area do terreno:  %.1f", A);
	printf(" metros quadrados. \n\n");
	printf("O perimetro do terreno: %.1f", P);
	printf(" metros.");

	
}
