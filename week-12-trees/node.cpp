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

template class Node<int>;
