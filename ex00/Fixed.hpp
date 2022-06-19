#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <ostream>

class Fixed
{
	private:
		int	fixedpointvalue;
		static const int numbfracbits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &cpyfixed);
		~Fixed(void);
		Fixed &operator=(const Fixed &rhs);
		int	getRawBits(void) const;
		void setRawBits( int const raw );
};

#endif
