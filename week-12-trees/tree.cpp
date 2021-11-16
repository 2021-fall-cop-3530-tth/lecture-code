#include "tree.hpp"

template <typename T>
Tree<T>::Tree ()
{
	this->root = nullptr;
}

template <typename T>
void Tree<T>::DeleteSubtree (Node<T>* subtreeRoot)
{
	if (subtreeRoot == nullptr)
	{
		return;
	}
	// post-order
	// left, right, center
	this->DeleteSubtree(subtreeRoot->GetLeft());
	this->DeleteSubtree(subtreeRoot->GetRight());
	delete subtreeRoot;
}

template <typename T>
Tree<T>::~Tree()
{
	this->DeleteSubtree(this->root);
}

template <typename T>
Node<T>* Tree<T>::GetRoot()
{
	return this->root;
}

template <typename T>
void Tree<T>::Insert (T data)
{
	if (this->root == nullptr)
	{
		this->root = new Node<T>(data);
	}
	else
	{
		Node<T>* currentNode = this->root;
		while (currentNode != nullptr)
		{
			if (currentNode->GetValue() > data)
			{
				// go left
				if (currentNode->GetLeft() == nullptr)
				{
					currentNode->SetLeft(new Node<T>(data));
					return;
				}
				else
				{
					currentNode = currentNode->GetLeft();
				}
			}
			else
			{
				// go right
				if (currentNode->GetRight() == nullptr)
				{
					currentNode->SetRight(new Node<T>(data));
					return;
				}
				else
				{
					currentNode = currentNode->GetRight();
				}
			}
		}
	}
}

template class Tree<int>;
