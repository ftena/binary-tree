#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

#include <iostream>

class BinaryTree {
public:

	struct Node
	{
		int value;
		Node *left;
		Node *right;
	};


	BinaryTree(int value)
	{
		root_ = new Node;

		root_->value = value;
		root_->left = nullptr;
		root_->right = nullptr;
	}

	~BinaryTree()
	{
		destroy();
	}

	void destroy()
	{
		destroy(root_);
	}

	void insert(int value)
	{
		insert(value, root_);
	}

	Node* getRoot()
	{
		return root_;
	}

	Node* getNode(int value)
	{
		return getNode(value, root_);
	}

	void preorderPrint( Node *leaf ) {
		if ( leaf != nullptr ) {  // Otherwise, there's nothing to print.
			std::cout << leaf->value << " ";
			preorderPrint( leaf->left );
			preorderPrint( leaf->right );
		}
	}

	void postorderPrint( Node *leaf ) {
		if ( leaf != nullptr ) {  // Otherwise, there's nothing to print.
			postorderPrint( leaf->left );
			postorderPrint( leaf->right );
			std::cout << leaf->value << " ";
		}
	}

	void inorderPrint( Node *leaf ) {
		if ( leaf != nullptr ) {  // Otherwise, there's nothing to print.
			inorderPrint( leaf->left );
			std::cout << leaf->value << " ";
			inorderPrint( leaf->right );
		}
	}

private:

	void destroy(Node* leaf)
	{
		if (leaf != nullptr) {
			destroy(leaf->left);
			destroy(leaf->right);
			delete leaf;
		}

	}

	void insert(int value, Node* leaf)
	{
		if (leaf != nullptr) {
			if(value < leaf->value)
			{
				if(leaf->left != nullptr) {
					insert(value, leaf->left);
				}
				else {
					leaf->left = new Node;
					leaf->left->value = value;
					leaf->left->left = nullptr;
					leaf->left->right = nullptr;
				}
			}
			else if(value >= leaf->value)
			{
				if(leaf->right != nullptr) {
					insert(value, leaf->right);
				}
				else {
					leaf->right = new Node;
					leaf->right->value = value;
					leaf->right->left = nullptr;
					leaf->right->right = nullptr;
				}
			}
		}
	}

	Node* getNode(int value, Node* leaf)
	{
		if (leaf != nullptr)
		{
			if (value == leaf->value) {
				return leaf;
			}

			if(value < leaf->value) {
				return getNode(value, leaf->left);
			} else {
				return getNode(value, leaf->right);
			}
		} else {
			return nullptr;
		}
	}

private:

	Node* root_;
};

#endif // __BINARY_TREE_H__
