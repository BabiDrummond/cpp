#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
	private:
		static const int	_fracBits = 8;
		int 				_rawBits;

	public:
		Fixed ();
		Fixed ( const int number );
		Fixed ( const float number );
		Fixed ( const Fixed &other );
		Fixed &operator= ( const Fixed &other );
		//Fixed &operator<< ( void );
		~Fixed ();

		int		getRawBits ( void ) const;
		void	setRawBits ( int const raw );

		int		toInt ( void ) const;
		float	toFloat ( void ) const;
};

#endif