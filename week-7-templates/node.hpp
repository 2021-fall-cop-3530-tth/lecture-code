#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T data;
	public:
		Node (T inData);
		T GetValue ();
};

#endif /*NODE_HPP*/
