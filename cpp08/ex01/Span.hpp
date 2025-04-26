#include <vector>

class Span
{
	private:
	unsigned int N;
	std::vector<int> sp;

	public:
	Span();
	Span(Span &other);
	Span &operator=(Span &other);
	~Span();

	Span(unsigned int n);
	void addNumber(int num);

	int shortestSpan();

	int longestSpan();
	
};
