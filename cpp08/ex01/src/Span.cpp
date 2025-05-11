#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (_numbers.size() >= _maxSize)
        throw std::out_of_range("Cannot add number: maximum capacity reached");
    
    _numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
    if (_numbers.size() <= 1)
        throw std::logic_error("Cannot find span: need at least two numbers");
    
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    
    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    
    for (size_t i = 1; i < sorted.size(); ++i)
    {
        unsigned int currentSpan = static_cast<unsigned int>(sorted[i] - sorted[i - 1]);
        if (currentSpan < minSpan)
            minSpan = currentSpan;
    }
    return minSpan;
}

unsigned int Span::longestSpan() const
{
    if (_numbers.size() <= 1)
        throw std::logic_error("Cannot find span: need at least two numbers");
    
    std::vector<int>::const_iterator minElement = std::min_element(_numbers.begin(), _numbers.end());
    std::vector<int>::const_iterator maxElement = std::max_element(_numbers.begin(), _numbers.end());
    
    return static_cast<unsigned int>(*maxElement - *minElement);
}