#include <iostream>
#include <string>

class cl
{
	public:
	int n;

	cl():n(0)
	{}
	cl(int n):n(n)
	{}
};

std::ostream &operator<<(std::ostream &out, const cl c1)
{
	std::ostream out1;
	out1 << std::to_string(c1.n);
	return out1;
}

int main()
{
	cl c1(1);
	cl c2(5);
	cl c3(4);

	std::string s = "abc";
	// s << c1 ;
	std::cout << c1;

}