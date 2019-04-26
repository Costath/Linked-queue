/*

Author: Thales Costa
Discipline: ED1
Professor: Irineu
May/2017

*/

#include "biblioteca.h"

int quant = 0;

Queue* enqueue(Queue* L, int element){
	quant++;
	
	if(L == NULL){		//L == NULL enquanto a fila estiver vazia
		L = (Queue*) malloc(sizeof(Queue));
		L->prox = NULL;
		L->conteudo = element;
		
		return L;
	}else{
		Queue* nova;
		nova = (Queue*) malloc(sizeof(Queue));
		nova->prox = L;
		nova->conteudo = element;
		L = nova;
		
		return L;
	}
}

int dequeue(Queue* L){
	int ret;
	Queue* anterior;
	Queue* P = L;
	
	if(quant>1){		//Caso a fila possua mais de um elemento, navega até o úiltimo, guardando o anterior, e depois o faz apontar para NULL
		while(P->prox != NULL){
			anterior = P;
			P = P->prox;
		}
		anterior->prox = NULL;
	}
		
	ret = P->conteudo;		//guarda o elemento retirado
	free(P);
	
	quant--;
	
	return ret;
}

int size(){
	return quant;
}

bool isEmpty(){
	if(quant==0){		//retorna 'true' caso a fila esteja vazia, 'false' caso contrário
		return true;
	}else{
		return false;
	}
}

int front(Queue* L){
	int i=0;
	Queue* P = L;
	
	while(P->prox != NULL){		//navega até o último elemento da fila
			P = P->prox;
		}
	
	return P->conteudo;
	
}

void fim(Queue* L){
	
	while(quant>0){		//chama a função dequeue até que a fila esteja vazia
		dequeue(L);
	}
	
}















