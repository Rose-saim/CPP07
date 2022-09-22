#include "whatever.hpp"
#include <iostream>
#define YELLOW "\x1B[33m"
#define END "\033[0m"

int	main(void)
{
	{
		std::cout << YELLOW << ">> subject" << END << std::endl;

		int	a = 2;
		int	b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

		std::string	c = "chaine1";
		std::string	d = "chaine2";

		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
		std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	}
	{
		std::cout << std::endl << YELLOW << ">> strings" << END << std::endl;

		std::string	a = "retsuko";
		std::string	b = "fenneko";
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	}
	{
		std::cout << std::endl << YELLOW << ">> char" << END << std::endl;

		char	a = 'a';
		char	b = 'z';
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	}
	{
		std::cout << std::endl << YELLOW << ">> double" << END << std::endl;

		double	a = 3.4e21;
		double	b = 3.3e21;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	}
	{
		std::cout << std::endl << YELLOW << ">> int" << END << std::endl;

		int	a = 2147483647;
		int	b = 2147483648;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	}
		{
		std::cout << std::endl << YELLOW << ">> float" << END << std::endl;

		float	a = 2000;
		float	b = 551;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	}
	return (0);
}