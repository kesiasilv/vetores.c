#include <stdio.h>
/*crie um codigo que solicite ao usuario 6 notas
e depois apresente a soma dos numeros par e a soma dos 
numeros impares, e por fim a media das notas;*/

int main(){
	//sem if e else;
	int i, nota[6], par = 0, impar = 0;
	float soma = 0, media = 0;
	
	for(i=1; i<=6; i++){
		printf("digite a nota %i\n", i);
		scanf("%i", &nota[i]);
		soma+= nota[i];
		
	//realiza a mesma opercoa de if e else
	(nota[i] % 2 == 0) ? (par += nota[i]) : (impar += nota[i]);
	
	/*explicando a estrutura condicional:
	sintaxe:
	expressao_condicional ? valor_se_verdadeiro : valor_se_falso;
	
	A expressão_condicional é avaliada primeiro. 
	Se for verdadeira, o valor_se_verdadeiro é retornado; 
	caso contrário, o valor_se_falso é retornado.*/
		
	}
	
	printf("notas digitadas: ");
	for(i=1; i<=6; i++){
		printf("%i ", nota[i]);
	}
	
	media = soma / 6;
	
	printf("\nsoma dos numeros pares: %d\n", par);
	printf("soma dos numeros impares: %d\n", impar);
	printf("media = %.2f", media);
	
}

/*obs: recomend-se a ultilização do if e else para ser mais claro, pois
é importante equilibrar a concisão (simplificacao) com a clareza.
Às vezes, um código mais longo e explícito pode ser mais fácil de entender, 
especialmente para programadores que estão começando ou para situações em que
a legibilidade é crucial. A escolha entre concisão e clareza depende do contexto
e das preferências da equipe de desenvolvimento.*/
