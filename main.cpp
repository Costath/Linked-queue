/*

Autor: Thales Costa
Disciplina: ED1
Professor: Irineu
Maio/2017

*/

#include "biblioteca.h"

int main() {
	setlocale(LC_ALL, "");

	Queue* L = NULL;

	bool sair = false;
	int menu, element;
	
	while (!sair){
		
		printf("1 - enqueue\n");
		printf("2 - dequeue\n");
		printf("3 - size\n");
		printf("4 - isEmpty\n");
		printf("5 - front\n");
		printf("6 - sair\n\n");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:		//enqueue
				printf("\n\nElemento a ser inserido: ");
				scanf("%d", &element);
				L = enqueue(L, element);
				
				system("cls");
				
			break;
			case 2:		//dequeue
				if(size()>0){		//Se tiver algum elemento na fila, chama a função dequeue
					printf("\n\nElemento \"%d\" retirado\n\n", dequeue(L));
					if(size()==0){		//se o tamanho da fila for igual a zero após chamar dequeue, faz L apontar para NULL
						L = NULL;
					}
				}else{
					printf("\n\nERRO - A fila está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
				
			break;
			case 3:		//size
				printf("\n\nTamanho da fila: %d\n\n", size());
				
				system("pause");
				system("cls");
				
			break;
			case 4:		//isEmpty
				if(isEmpty()){
					printf("\n\nA fila está vazia.\n\n");
				}else{
					printf("\n\nA fila não está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
			
			break;
			case 5:		//front
				if(size()>0){
					printf("\n\nElemento na frente da fila: %d\n\n", front(L));
				}else{
					printf("\n\nERRO - A fila está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
				
			break;
			case 6:		//sair
				fim(L);
				sair = true;
				printf("\nObrigado!\n");
				
			break;
			
		}
		
	}
	
	return 0;
}
