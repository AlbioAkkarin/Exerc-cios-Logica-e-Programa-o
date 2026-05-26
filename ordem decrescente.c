main(){
	int NUM1,NUM2,NUM3;
	
	printf("Numero-1= ");
	scanf("%d",&NUM1);
	printf("Numero-2= ");
	scanf("%d",&NUM2);
          printf("Numero-3= ");
	scanf("%d",&NUM3);
	
	if(NUM1>NUM2){
		if(NUM1>NUM3){
			if(NUM2>NUM3){
				printf("%d - %d - %d",NUM1,NUM2,NUM3);
			}
			else{
				printf("%d - %d - %d",NUM1,NUM3,NUM2);
			}
		}
		else{
			printf("%d - %d - %d",NUM3,NUM1,NUM2);
		}
	}
	else{
		if(NUM2>NUM3){
			if(NUM1>NUM3){
				printf("%d - %d - %d",NUM2,NUM1,NUM3);
			}
			else{
				printf("%d - %d - %d",NUM2,NUM3,NUM1);
			}
		}
		else{
			printf("%d - %d - %d",NUM3,NUM2,NUM1);
		}
	}
}

