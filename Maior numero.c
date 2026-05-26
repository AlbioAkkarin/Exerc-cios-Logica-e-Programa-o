main(){
	
float a,b,c;

printf("Digite o primeiro numero: ");
scanf("%f", &a);
printf("Digite o segundo numero: ");
scanf("%f", &b);
printf("Digite o terceiro numero: ");
scanf("%f", &c);

if(a>b){
	if(b>c){
		printf("%.2f e o maior", a);
	}
	else{ 
		if(c>a){
			printf("%.2f e o maior", c);
		}
		else{
		 printf("%.2f e o maior", a);
		 }
	}
}
else{
	if(b>c){
		printf ("%.2f e o maior", b);
		}
		else{printf ("%.2f e o maior", c);
		}
	}


}
