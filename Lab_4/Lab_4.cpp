// Lab_4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	/*
	Tree tree;
	tree.add(8);
	tree.add(9);
	tree.add(5);
	tree.add(4);
	tree.add(6);
	tree.add(7);
	tree.printTree();
	*/
	/*
	Tree tree(5, 3, 7, 2, 4, 8, -1);
	tree.printTree();
	tree.remove(9);
	tree.printTree();
	*/
	Tree A(0, 1, 3, 5, 6, -1);
	Tree B(1, 2, -1);
	Tree C(2, 3, -1);
	Tree D(4, 5, -1);
	Tree E(5, 6, -1);
	Tree result;

	//result = A & B | C | (D + E);
	A.add(2);
	A.printTree();

	system("pause");
    return 0;
}

