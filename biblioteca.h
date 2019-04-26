/*

Autor: Thales Costa
Disciplina: ED1
Professor: Irineu
Maio/2017

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Fila {

	int conteudo;
	struct Fila* prox;

} Queue;

Queue* enqueue(Queue* L, int num);
int dequeue(Queue* L);
int size();
bool isEmpty();
int front(Queue* L);
void fim(Queue* L);

