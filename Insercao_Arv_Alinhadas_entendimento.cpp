#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	
	stack <string> dominos;  /* As árvores alinhadas incorporam ponteiros(linhas) para os nós sucessores e antecessores, de 
	                         acordo com o percurso na ordem de entrada, seriam necessários 4 ponteiros já existentes para que
							 não pudessem ser sobrecarregados. Por isso aplica-se uma variável de controle. */
	 
	cout << "Inserindo valores em uma árvore binária alinhada." << endl;
	cout << "Denominei minha árvore aplicando pilhas que chamei de dominos". << endl;    // Questão 1

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
