#include <deque>
#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int	main(void)
{
	// vector 테스트
	std::vector<int>	vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3); vec.push_back(4);
	vec.push_back(5);

	try
	{
		std::vector<int>::iterator	it = easyfind(vec, 3);
		std::cout << "Found in vector: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Not found in vector: " << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator	it = easyfind(vec, 6);
		std::cout << "Found in vector: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Not found in vector: " << e.what() << std::endl;
	}

	// list 테스트
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);

	try
	{
		std::list<int>::iterator	it = easyfind(lst, 4);
		std::cout << "Found in list: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Not found in list: " << e.what() << std::endl;
	}

	try
	{
		std::list<int>::iterator	it = easyfind(lst, 6);
		std::cout << "Found in list: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Not found in list: " << e.what() << std::endl;
	}

	// deque 테스트
	std::deque<int>	deq;
	deq.push_back(1);
	deq.push_back(2);
	deq.push_back(3);
	deq.push_back(4);
	deq.push_back(5);

	try
	{
		std::deque<int>::iterator	it = easyfind(deq, 5);
		std::cout << "Found in deque: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Not found in deque: " << e.what() << std::endl;
	}
	try
	{
		std::deque<int>::iterator	it = easyfind(deq, 6);
		std::cout << "Found in deque: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Not found in deque: " << e.what() << std::endl;
	}

	return (0);
}
