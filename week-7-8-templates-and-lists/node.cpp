#include "node.hpp"

template <typename T>
Node<T>::Node (T inData, Node<T>* n)
{
	this->data = inData;
	this->next = n;
}

template <typename T>
T Node<T>::GetValue ()
{
	return this->data;
}

template <typename T>
Node<T>* Node<T>::GetNext ()
{
	return this->next;
}

template class Node<int>;
