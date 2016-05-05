#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*typedef struct Elemento{
	int Informacao;
	Elemento *ProximoElemento;
}Elemento; */

int Menu();
void GerenciarMenu(int Opcao);

int main(){
	int OpcaoMenu;

	do{
		OpcaoMenu = 0;
		OpcaoMenu = Menu();		
		GerenciarMenu(OpcaoMenu);
	}while(OpcaoMenu != 0);

	return 0;
}

int Menu(){
	int Opcao;

	printf("\n*********************************************"  );
	printf("\n[(0) SAIR DO PROGRAMA ......................]"  );
	printf("\n[(1) INCLUIR ELEMENTO ......................]"  );
	printf("\n[(2) EXIBIR TODOS OS ELEMENTOS .............]"  );
	printf("\n[(3) EXIBIR TODOS OS ELEMENTOS CALCULADOS ..]"  );
	printf("\n[(4) DESTRUIR A LISTA DOS ELEMENTOS ........]"  );
	printf("\n*********************************************\n");
	printf("\tOPÇÃO ESCOLHIDA: "                              );
	scanf("%d", &Opcao);
	getchar();
	printf("\n*********************************************"  );

	return Opcao;
}

void GerenciarMenu(int Opcao){
	switch(Opcao){
		case 0:
			printf("\nCase 0");
			break;
		case 1:
			printf("\nCase 1");
			break;
		case 2:
			printf("\nCase 2");
			break;
		case 3:
			printf("\nCase 3");
			break;
		case 4:
			printf("\nCase 4");
			break;
		default:
			printf("\nCase default");
			break;
	}
}
