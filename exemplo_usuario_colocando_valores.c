#include <stdio.h>

int main(){
	int v[5];
	int i;

	for(i=0; i<5; i++){
		printf("insira um dado:\n");
		scanf("%i", &v[i]);
	}
	
	printf("dados inseridos: ");
	for(i=0; i<5; i++){
		printf("%i ", v[i]);
	}

}
