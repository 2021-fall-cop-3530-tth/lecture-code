#ifndef FOO_HPP
#define FOO_HPP

class Foo
{
	private:
		int * a;
	public:
		Foo ();
		Foo (const Foo& rhs);
		Foo& operator= (const Foo& rhs);
		~Foo ();
};

#endif /*FOO_HPP*/