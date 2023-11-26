#include <stdio.h>
/*crie um codigo que solicite ao usuario 6 notas
e depois apresente a soma dos numeros par e a soma dos 
numeros impares, e por fim a media das notas;*/

int main(){
	int i, nota[6], par = 0, impar = 0;
	float soma = 0, media = 0;
	
	for(i=0; i<6; i++){
		printf("digite a nota %i\n", i + 1);
		scanf("%d", &nota[i]);
		soma+= nota[i];
	}
	
	printf("soma = %.2f\n", soma);
	printf("notas digitadas: ");
	for(i=0; i<6; i++){
		printf("%i ", nota[i]);
}
//calculando a soma dos numeros pares e impares:
for (i = 0; i < 6; i++) {
	/*A expressão (nota[i] % 2 == 0) é uma expressão que avalia se nota[i] é par. 
	Se a condição (nota[i] % 2 == 0) for verdadeira (ou seja, a nota é par), 
	ela será avaliada como 1 após a conversão para o tipo inteiro (int).*/ 
	
        par += nota[i] * (int) (nota[i] % 2 == 0);

	/*se a condição (nota[i] % 2 != 0) for verdadeira (ou seja a nota é impar)
		ela será avaliada como 1 apos a conversao para o tipo inteiro (int)*/
        impar += nota[i] * (int) (nota[i] % 2 != 0);
        
    /*	Ao multiplicar notas[i] por esta expressão (int) (notas[i] % 2 == 0), 
	estamos essencialmente multiplicando a nota pelo resultado da expressão. 
	Se a nota for par, o resultado será a própria nota multiplicada por 1,
	o que não altera o valor. a mesma coisa se a nota for impar.*/
       
    }
    
    media = soma / 6;
	
	printf("\nsoma dos numeros pares: %d\n", par);
	printf("soma dos numeros impares: %d\n", impar);
	printf("media = %.2f", media);
	
}
