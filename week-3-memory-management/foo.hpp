#ifndef FOO_HPP
#define FOO_HPP

class Foo
{
	private:
		int * a;
		void ReleaseMemory ();
	public:
		Foo (int a = 10);
		Foo (const Foo& rhs);
		Foo& operator= (const Foo& rhs);
		~Foo ();
};

#endif /*FOO_HPP*/