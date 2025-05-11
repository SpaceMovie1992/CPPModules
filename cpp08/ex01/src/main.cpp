#include "Span.hpp"

int main()
{
	std::cout << "=== Subject Test ===" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	std::cout << "\n=== Large Span Test ===" << std::endl;
	Span largeSpan(10000);

	std::srand(static_cast<unsigned int>(std::time(NULL)));

	for (int i = 0; i < 10000; ++i)
	{
		largeSpan.addNumber(std::rand() % 100000);
	}

	std::cout << "Shortest span: " << largeSpan.shortestSpan() << std::endl;
	std::cout << "Longest span: " << largeSpan.longestSpan() << std::endl;

	std::cout << "\n=== Add Range Test ===" << std::endl;
	Span rangeSpan(10);
	std::vector<int> numbers;

	for (int i = 1; i <= 5; ++i)
		numbers.push_back(i * 10);

	rangeSpan.addRange(numbers.begin(), numbers.end());

	std::cout << "Shortest span after adding range: " << rangeSpan.shortestSpan() << std::endl;
	std::cout << "Longest span after adding range: " << rangeSpan.longestSpan() << std::endl;


	std::cout << "\n=== Error Cases ===" << std::endl;

	Span smallSpan(2);
	smallSpan.addNumber(1);
	smallSpan.addNumber(2);

	try
	{
		std::cout << "Trying to add a number to a full span..." << std::endl;
		smallSpan.addNumber(3);
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Span emptySpan(5);

	try
	{
		std::cout << "Trying to find shortest span in an empty span..." << std::endl;
		emptySpan.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Span singleSpan(5);
	singleSpan.addNumber(42);

	try
	{
		std::cout << "Trying to find longest span in a span with only one number..." << std::endl;
		singleSpan.longestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}