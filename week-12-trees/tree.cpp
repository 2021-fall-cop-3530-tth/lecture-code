#include "tree.hpp"

template <typename T>
Tree<T>::Tree ()
{
	this->root = nullptr;
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
