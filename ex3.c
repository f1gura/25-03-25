#include <stdio.h>

int main(void) {
  char comando;

  printf("Digite L para lavar,enxugar e secar digite E para enxugare secar e digite S para secar, F para encerrar:");
  comando = getchar();
  getchar();

  int lavar = 0;
  int enxaguar = 0;
  int secar = 0;

  while( comando != 'F' ) {
    switch (comando) {
      case 'L':
	lavar++;
	
      case 'E': 
	enxaguar++;
	
      case 'S':
	secar++;
	
	printf("lavar: %d enxaguar: %d secar: %d \n", lavar, enxaguar, secar);
    }

    printf("Digite L para lavar,enxugar e secar digite E para enxugare secar e digite S para secar, F para encerrar:");
    scanf("%c", &comando);
    getchar();
    
  }
  

  
  return 0;
}
