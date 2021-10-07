#include "node.hpp"

template <typename T>
Node<T>::Node (T inData)
{
	this->data = inData;
}

template <typename T>
T Node<T>::GetValue ()
{
	return this->data;
}

template class Node<int>;
