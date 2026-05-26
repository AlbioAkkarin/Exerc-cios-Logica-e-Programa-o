main(){
	float not1,not2,not3,media;
	
	printf("== Avaliacao de Aluno==\n\n");
	printf("Nota da Avaliacao 1: ");
	scanf("%f", &not1);
		printf("Nota da Avaliacao 2: ");
	scanf("%f", &not2);
		printf("Nota da Avaliacao 3: ");
	scanf("%f", &not3);
	media=(not1+not2+not3)/3;
	printf ("A media do aluno foi %.2f \n", media);
	
	if(media>=7){
		printf("O aluno foi aprovado\n");
	}
		else{
			if(media>=4){
			printf("O aluno esta de prova final");
		}
			else{
			printf("O Aluno foi reprovado");
			}
		}
	
}
