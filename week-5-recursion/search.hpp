#ifndef SEARCH_HPP
#define SEARCH_HPP

class Search
{
	private:
		static int RecursiveFind(int arr[], int left, int right, int searchKey);
	public:
		static int Find(int arr[], int length, int searchKey);
};

#endif /*SEARCH_HPP*/