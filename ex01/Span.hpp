#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span& source);
		Span&	operator=(const Span& source);
		~Span(void);

		void			addNumber(unsigned int num);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void) const;
	private:
		Span(void);
		std::vector<unsigned int>	mNumbers;
		unsigned int				mMaxSize;
};
#endif
