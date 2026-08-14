#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
	private:
		static const int	_fracBits = 8;
		int 				_value;

	public:
		Fixed ();
		Fixed ( const int raw );
		Fixed ( const float raw );
		Fixed ( const Fixed &other );
		Fixed &operator= ( const Fixed &other );
		~Fixed ();

		int		getRawBits ( void ) const;
		void	setRawBits ( int const raw );

		int		toInt ( void ) const;
		float	toFloat ( void ) const;

		bool	operator< ( void );
		bool	operator> ( void );
		bool	operator<= ( void );
		bool	operator>= ( void );
		bool	operator== ( void );
		bool	operator!= ( void );

		int		operator+ ( void );
		int		operator- ( void );
		int		operator* ( void );
		int		operator/ ( void );

		int		operator++ ( void );
		int		operator-- ( void );
};

std::ostream& operator<< ( std::ostream& out, const Fixed& fixed );

#endif
