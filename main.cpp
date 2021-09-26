//Nome: Nicolas de Barros
//TIA: 32070837

//Nome: Domingos Soares do Carmo Neto
//TIA: 32032889

#include <iostream>
#include "Tree.h"

int main() 
{
	using namespace std;

	cout << "////////////////////////////////// ARVORE BINARIA - NICOLAS DE BARROS E DOMINGOS NETO /////////////////////////////////////";
	cout << "\n";

	Node* A = new Node();
	Node* B = new Node();
	Node* C = new Node();
	Node* D = new Node();
	Node* E = new Node();
	Node* F = new Node();

	Tree* tree = new Tree(A);

	// Nó A
	A->SetData("A");
	A->SetLeft(B);
	A->SetRight(C);

	//Nó B
	B->SetData("B");
	B->SetLeft(D);

	//Nó C
	C->SetData("C");
	C->SetLeft(E);
	C->SetRight(F);

	//Nó D
	D->SetData("D");

	//Nó E
	E->SetData("E");
	
	//Nó F
	F->SetData("F");

	B->SetParent(A);
	C->SetParent(A);
	D->SetParent(B);
	E->SetParent(C);
	F->SetParent(C);

	cout << "A e um no raiz? " << A->isRoot() << '\n';
	cout << "B e um no raiz? " << B->isRoot() << '\n';
	cout << "C e um no raiz? " << C->isRoot() << '\n';
	cout << "D e um no raiz? " << D->isRoot() << '\n';
	cout << "E e um no raiz? " << E->isRoot() << '\n';
	cout << "F e um no raiz? " << F->isRoot() << '\n';

	cout << "\n";

	cout << "A e um no folha? " << A->isLeaf() << '\n';
	cout << "B e um no folha? " << B->isLeaf() << '\n';
	cout << "C e um no folha? " << C->isLeaf() << '\n';
	cout << "D e um no folha? " << D->isLeaf() << '\n';
	cout << "E e um no folha? " << E->isLeaf() << '\n';
	cout << "F e um no folha? " << F->isLeaf() << '\n';

	cout << "\n";

	cout << "Grau do no A " << A->GetDegree() << '\n';
	cout << "Grau do no B " << B->GetDegree() << '\n';
	cout << "Grau do no C " << C->GetDegree() << '\n';
	cout << "Grau do no D " << D->GetDegree() << '\n';
	cout << "Grau do no E " << E->GetDegree() << '\n';
	cout << "Grau do no F " << F->GetDegree() << '\n';

	cout << "\n";

	cout << "Nivel do no A " << A->GetLevel() << '\n';
	cout << "Nivel do no B " << B->GetLevel() << '\n';
	cout << "Nivel do no C " << C->GetLevel() << '\n';
	cout << "Nivel do no D " << D->GetLevel() << '\n';
	cout << "Nivel do no E " << E->GetLevel() << '\n';
	cout << "Nivel do no F " << F->GetLevel() << '\n';

	cout << "\n";

	cout << "Altura do no A " << A->GetHeight() << '\n';
	cout << "Altura do no B " << B->GetHeight() << '\n';
	cout << "Altura do no C " << C->GetHeight() << '\n';
	cout << "Altura do no D " << D->GetHeight() << '\n';
	cout << "Altura do no E " << E->GetHeight() << '\n';
	cout << "Altura do no F " << F->GetHeight() << '\n';

	cout << "\n";

	cout << "/////////////////////// ARVORE (grau, altura, vazio ou nao) ////////////////////////\n";

	cout << "\n";

	cout << "Arvore esta vazia? " << tree->isEmpty() << '\n';
	cout << "Grau da arvore: " << tree->GetTreeDegree() << '\n';
	cout << "Altura da arvore: " << tree->GetTreeHeight() << '\n';

	cout << "\n";

	cout << "//////////////////Percorrendo a arvore/////////////////\n";

	cout << "\n";

	cout << "Arvore em ordem: " << tree->TraverseInOrder() << '\n';
	cout << "Arvore em pre ordem: " << tree->TraversePreOrder() << '\n';
	cout << "Arvore em pos ordem: " << tree->TraversePostOrder() << '\n';

	//deletes : 
	delete tree;
	delete F;
	delete E;
	delete D;
	delete C;
	delete B;
	delete A;
}