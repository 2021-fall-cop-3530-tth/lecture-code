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
};

#endif /*TREE_HPP*/