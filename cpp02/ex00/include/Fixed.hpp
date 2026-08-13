#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {
	private:
		const int	_bits;
		int 		_value;

	public:
		Fixed ();
		Fixed ( const Fixed &other );
		Fixed &operator= ( const Fixed &other );
		~Fixed ();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif