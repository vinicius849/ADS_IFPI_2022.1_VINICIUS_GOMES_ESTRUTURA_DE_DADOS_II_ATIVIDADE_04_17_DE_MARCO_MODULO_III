#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	
	stack <string> dominos;  /* As �rvores alinhadas incorporam ponteiros(linhas) para os n�s sucessores e antecessores, de 
	                         acordo com o percurso na ordem de entrada, seriam necess�rios 4 ponteiros j� existentes para que
							 n�o pudessem ser sobrecarregados. Por isso aplica-se uma vari�vel de controle. */
	 
	cout << "Inserindo valores em uma �rvore bin�ria alinhada." << endl;
	cout << "Denominei minha �rvore aplicando pilhas que chamei de dominos". << endl;    // Quest�o 1

void Inserir(Tipo elemento) {
	Node *p = raiz, *esquerda = NULL, *direita = NULL;
	
	while(p != NULL) {
		esquerda = p;
		if(p -> chave < elemento) {
			p = p -> direita;
			else {
				p = p -> esquerda;
			}
		}
	}
	if (raiz == NULL) {
		raiz = new Node(elemento);
	else {
		if(esquerda -> chave < elemento) {
			p -> direita = new Node(elemento);
			else {
				p -> esquerda = new Node(elemento);
			}
		}
	}
	}
	
	return 0;
}
