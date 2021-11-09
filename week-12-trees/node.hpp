#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T data;
		Node<T>* left;
		Node<T>* right;
	public:
		Node (T inData, Node<T>* l = nullptr, Node<T>* r = nullptr);
		T GetValue ();
		Node<T>* GetLeft ();
		Node<T>* GetRight ();
};

#endif /*NODE_HPP*/
