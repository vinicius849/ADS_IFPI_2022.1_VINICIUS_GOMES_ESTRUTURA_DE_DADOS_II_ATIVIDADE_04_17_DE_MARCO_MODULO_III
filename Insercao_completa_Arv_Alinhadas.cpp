#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>

using namespace std;         /* A implementa��o das �rvores alinhadas incorporam ponteiros(linhas) para os n�s sucessores e
                              antecessores, de acordo com o percurso na ordem de entrada, seriam necess�rios 4 ponteiros j� 
							  existentes para que n�o pudessem ser sobrecarregados. Por isso aplica-se uma vari�vel de controle. */

template <class T>
void ThreadedNode<T>::insert(const T& el) {
	ThreadedNode<T> *p, *prev = NULL, *newNode;
	newNode = new ThreadedNode<T>(el);
	if(root == NULL) {  // A �rvore est� vazia;
		root = new Node;
		return;
	}
	p = root;  // Encontre um lugar para inserir newNode
	
	while (p != NULL) {
		prev = p;
		if (p -> el > el) {
			p = p -> esquerda;
		}
		else if (p -> successor == NULL) {  // V� para o n� da direita somente se ele
			 p = p -> right;  // For um descendente, n�o um sucessor
		}else {
			break;  // N�o siga o v�nculo do sucessor
		}
	
	}
	
	if (prev -> el > el) {  // Se newNode e o filho a esquerda de
		prev -> left = newNode;  // Seu ascendente, o ascendente
		newNode -> successor = 1;  // Tamb�m se torna seu sucessor
		newNode -> right = prev;
	}
	else if (prev -> successor == 1) {  // Se o ascendenete de newNode
		newNode -> successor = 1;  // N�o for o no mais a direita
		prev -> successor = 0;  // Fa�a o sucessor do ascendente
		newNode -> right = prev -> right;  // Sucessor de newNode
		prev -> right = newNode;
	} else {
		prev -> right = newNode;  // Caso contr�rio, ele n�o ter� sucessor
	}
	
}
		
	
