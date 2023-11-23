#include <stdio.h>

int main(){
	//define os valores dos vetores;
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;// a variavel "s" vai somar com o vetor seguinte ate o for terminar  
	
	//a varivael i vai incrementar 5 vezes
	for(i=0; i<5; i++){
	//explicacao visual no video do pietro martins sobre vetores min : 23:40;
		s+= v[i];
	}
	
	//nesse resultado fiz a divisao na propria linha de impressao para simplicar
	printf("media  = %.2f", s / 5);
}
