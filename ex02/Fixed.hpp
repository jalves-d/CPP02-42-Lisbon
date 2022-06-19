
#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int	fixedpointvalue;
		static const int numbfracbits = 8;
	public:
    	Fixed( void );
    	Fixed(const int x);
    	Fixed(const Fixed &op);
    	Fixed(float const f);
    	~Fixed( void );

    	Fixed & operator=(const Fixed &op);

    	int getRawBits() const;
    	void setRawBits(int raw);

    	float toFloat() const;
    	int toInt() const;

};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif
