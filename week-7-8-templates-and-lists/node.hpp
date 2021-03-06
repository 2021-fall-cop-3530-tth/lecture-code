#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T data;
		Node<T>* next;
	public:
		Node (T inData, Node<T>* n = nullptr);
		T GetValue ();
		Node<T>* GetNext ();
};

#endif /*NODE_HPP*/
