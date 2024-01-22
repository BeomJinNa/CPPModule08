#include <stdexcept>
#include <algorithm>
#include "Span.hpp"

Span::Span(void)
	: mMaxSize(0)
{
}

Span::Span(unsigned int N)
	: mMaxSize(N)
{
}

Span::Span(const Span& source)
	: mNumbers(source.mNumbers)
	, mMaxSize(source.mMaxSize)
{
}

Span&	Span::operator=(const Span& source)
{
	if (this != &source)
	{
		mNumbers = source.mNumbers;
		mMaxSize = source.mMaxSize;
	}

	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(unsigned int num)
{
	if (mNumbers.size() >= mMaxSize)
		throw std::runtime_error("container is full");
	mNumbers.push_back(num);
}

unsigned int	Span::shortestSpan(void)
{
	if (mNumbers.size() < 2)
		throw std::runtime_error("elements is not enough (less than 2)");

	std::sort(mNumbers.begin(), mNumbers.end());

	unsigned int	minimum = std::numeric_limits<unsigned int>::max();
	for (size_t i = 0; i < mNumbers.size() - 1; ++i)
	{
		unsigned int	difference = mNumbers[i + 1] - mNumbers[i];
		if (difference < minimum)
			minimum = difference;
	}
	return (minimum);
}

unsigned int	Span::longestSpan(void) const
{
	if (mNumbers.size() < 2)
		throw std::runtime_error("elements is not enough (less than 2)");

	return (*std::max_element(mNumbers.begin(), mNumbers.end())
		  - *std::min_element(mNumbers.begin(), mNumbers.end()));
}
