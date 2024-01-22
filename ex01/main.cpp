#include <iostream>
#include "Span.hpp"

int main(void)
{
	try
	{
		Span	sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		// 추가 테스트: Span이 가득 찼을 때
		sp.addNumber(5); // 이 부분에서 예외가 발생해야 합니다.
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Span	sp2(1);
		sp2.addNumber(10);
		// 여기서 예외가 발생해야 합니다. (최소 간격을 찾기에 충분하지 않음)
		sp2.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
