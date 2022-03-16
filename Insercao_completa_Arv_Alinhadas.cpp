#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>

using namespace std;         /* A implementação das árvores alinhadas incorporam ponteiros(linhas) para os nós sucessores e
                              antecessores, de acordo com o percurso na ordem de entrada, seriam necessários 4 ponteiros já 
							  existentes para que não pudessem ser sobrecarregados. Por isso aplica-se uma variável de controle. */

template <class T>
void ThreadedNode<T>::insert(const T& el) {
	ThreadedNode<T> *p, *prev = NULL, *newNode;
	newNode = new ThreadedNode<T>(el);
	if(root == NULL) {  // A árvore está vazia;
		root = new Node;
		return;
	}
	p = root;  // Encontre um lugar para inserir newNode
	
	while (p != NULL) {
		prev = p;
		if (p -> el > el) {
			p = p -> esquerda;
		}
		else if (p -> successor == NULL) {  // Vá para o nó da direita somente se ele
			 p = p -> right;  // For um descendente, não um sucessor
		}else {
			break;  // Não siga o vínculo do sucessor
		}
	
	}
	
	if (prev -> el > el) {  // Se newNode e o filho a esquerda de
		prev -> left = newNode;  // Seu ascendente, o ascendente
		newNode -> successor = 1;  // Também se torna seu sucessor
		newNode -> right = prev;
	}
	else if (prev -> successor == 1) {  // Se o ascendenete de newNode
		newNode -> successor = 1;  // Não for o no mais a direita
		prev -> successor = 0;  // Faça o sucessor do ascendente
		newNode -> right = prev -> right;  // Sucessor de newNode
		prev -> right = newNode;
	} else {
		prev -> right = newNode;  // Caso contrário, ele não terá sucessor
	}
	
}
		
	
