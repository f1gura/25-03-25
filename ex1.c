#include <stdio.h>

int main (){
	
	int a,b,soma = 0;
	printf("digite um numero: ");
	scanf("%d", &a);
	
	for (b = 1;b <= a; b++){
		
		if (b % 2 == 1){
			
		soma += b;
			
		}
		
	}
	
	printf(" a soma dos numeros impares e: %d",soma);
	
	
}
