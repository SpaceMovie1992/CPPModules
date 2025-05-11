#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>

class Span
{
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

	void addNumber(int number);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	template <typename Iterator>
	void addRange(Iterator begin, Iterator end)
	{
		unsigned int rangeSize = 0;
		Iterator temp = begin;

		while (temp != end)
		{
			++rangeSize;
			++temp;
		}
	
		if (_numbers.size() + rangeSize > _maxSize)
			throw std::out_of_range("Cannot add range: would exceed maximum capacity");
		
		_numbers.insert(_numbers.end(), begin, end);
	}
};