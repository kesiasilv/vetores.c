#include <stdio.h>
/*crie um codigo que solicite ao usuario 6 notas
e depois apresente a soma dos numeros par e a soma dos 
numeros impares, e por fim a media das notas;*/

int main(){
	int i, nota[6], par = 0, impar = 0;
	float soma = 0, media = 0;
	
	for(i=1; i<=6; i++){
		printf("digite a nota %i\n", i);
		scanf("%i", &nota[i]);
		soma+= nota[i];
		
	}
	
	printf("notas digitadas: ");
	for(i=1; i<=6; i++){
		printf("%i ", nota[i]);
		
		if(nota[i] % 2 == 0){
			par+= nota[i];
		}else{
			impar+= nota[i];
		}
	}
	
	media = soma / 6;
	
	printf("\nsoma dos numeros pares: %d\n", par);
	printf("soma dos numeros impares: %d\n", impar);
	printf("media = %.2f", media);
	
}
