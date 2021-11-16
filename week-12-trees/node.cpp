#include "node.hpp"

template <typename T>
Node<T>::Node (T inData, Node<T>* l, Node<T>* r)
{
	this->data = inData;
	this->left = l;
	this->right = r;
}

template <typename T>
T Node<T>::GetValue ()
{
	return this->data;
}

template <typename T>
Node<T>* Node<T>::GetLeft ()
{
	return this->left;
}

template <typename T>
Node<T>* Node<T>::GetRight ()
{
	return this->right;
}

template <typename T>
void Node<T>::SetLeft (Node<T>* newLeft)
{
	this->left = newLeft;
}

template <typename T>
void Node<T>::SetRight (Node<T>* newRight)
{
	this->right = newRight;
}

template class Node<int>;
