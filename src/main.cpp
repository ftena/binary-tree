#include <iostream>
#include "BinaryTree.h"

/*
 * Sample tree:
 *      4
 *     / \
 *    2   5
 *   / \
 *  1   3
*/

int main(int argc, char** argv)
{
	BinaryTree bt(4);

	std::cout << "+ preorderPrint: ";

	bt.preorderPrint(bt.getRoot());

	std::cout << std::endl;

	bt.insert(2);
	bt.insert(5);
	bt.insert(1);
	bt.insert(3);

	std::cout << "+ preorderPrint: ";

	bt.preorderPrint(bt.getRoot());

	std::cout << std::endl;

	std::cout << "+ postorderPrint: ";

	bt.postorderPrint(bt.getRoot());

	std::cout << std::endl;

	std::cout << "+ inorderPrint: ";

	bt.inorderPrint(bt.getRoot());

	std::cout << std::endl;

	std::cout << "+ getNode(2) & preorderPrint: ";

	bt.preorderPrint(bt.getNode(2));

	std::cout << std::endl;

	return 0;
}
