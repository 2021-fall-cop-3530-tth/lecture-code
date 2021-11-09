#ifndef TREE_HPP
#define TREE_HPP

#include "node.hpp"

template <typename T>
class Tree
{
	private:
		Node<T>* root;
	public:
		Tree ();
		Node<T>* GetRoot();
		void Insert (T data);
};

#endif /*TREE_HPP*/