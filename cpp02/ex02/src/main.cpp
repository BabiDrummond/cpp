#include "Fixed.hpp"

int main( void ) {
	{
		Fixed	a;
		Fixed	const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << Fixed::min( a, b ) << std::endl;
	}

	Fixed		a;
	Fixed const	c( 42.25f );

	a = Fixed(5.5f);
	Fixed	b = a;

	std::cout << std::endl;
	std::cout << a + c << std::endl;
	std::cout << a - c << std::endl;
	std::cout << a * c << std::endl;
	std::cout << a / c << std::endl;

	std::cout << std::boolalpha;
	std::cout << a << " > " << c << ' ' << (a > c) << std::endl;
	std::cout << a << " < " << c << ' ' << (a < c) << std::endl;
	std::cout << a << " >= " << c << ' ' << (a >= c) << std::endl;
	std::cout << a << " >= " << b << ' ' << (a >= b) << std::endl;
	std::cout << a << " <= " << c << ' ' << (a <= c) << std::endl;
	std::cout << a << " <= " << b << ' ' << (a <= b) << std::endl;
	std::cout << a << " == " << c << ' ' << (a == c) << std::endl;
	std::cout << a << " == " << b << ' ' << (a == b) << std::endl;
	std::cout << a << " != " << c << ' ' << (a != c) << std::endl;
	std::cout << a << " != " << b << ' ' << (a != b) << std::endl;

	return 0;
}