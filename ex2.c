#include <stdio.h>

int main(void) {
  char comando;

  printf("Digite o comando recebido, F para encerrar:");
  comando = getchar();
  getchar();

  int lavar = 0;
  int enxaguar = 0;
  int secar = 0;

  while( comando != 'F' ) {
    switch (comando) {
      case 'P':
	lavar++;
	break;
      case 'M': 
	enxaguar++;
	break;
      case 'G':
	secar++;
	break;
    }

    printf("Digite o comando recebido, F para encerrar:");
    scanf("%c", &comando);
    getchar();
    
  }
  

  printf("P: %d M: %d G: %d", lavar, enxaguar, secar);
  return 0;
}
