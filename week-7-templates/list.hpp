#ifndef LIST_HPP
#define LIST_HPP
#include "node.hpp"

template <typename T>
class List
{
	private:
		Node<T>* front;
	public:
		List ();
		void InsertAtFront (T inData);
		Node<T>* GetFront ();
};

#endif /*LIST_HPP*/
