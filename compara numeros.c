
//Que leia dois números e indique se são iguais ou, se diferentes, mostre o maior e o menor (nesta sequência).

main(){
	
		int NUM1, NUM2;
	printf("== Compara 2 numeros ==\n\n");
	
	printf("numero-1=");
	scanf("%d", &NUM1);
	printf("numero-2=");
	scanf("%d", &NUM2);
	
	if (NUM1 == NUM2){
		printf("Sao iguais");
	}
		else{ 
			if (NUM1 > NUM2){
				printf("Maior = %d e Menor = %d", NUM1, NUM2);
			}
			else{
				printf("Maior = %d e Menor = %d", NUM2, NUM1);
			}
		}
	
	
}
