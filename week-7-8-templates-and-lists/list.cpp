#include "list.hpp"

template <typename T>
List<T>::List ()
{
	this->front = nullptr;
}

template <typename T>
void List<T>::DeleteFromFront ()
{
	if (this->front != nullptr)
	{
		Node<T>* temp = this->front->GetNext();
		delete this->front;
		this->front = temp;
	}
}

template <typename T>
void List<T>::InsertAtFront (T inData)
{
	// steps 1 & 2
	Node<T>* newNode = new Node<T>(inData, this->front);
	this->front = newNode;
}

template <typename T>
Node<T>* List<T>::GetFront ()
{
	return this->front;
}

template class List<int>;
