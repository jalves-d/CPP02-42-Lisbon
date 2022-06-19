#include "Fixed.hpp"

#define fixedpointone (1 << 8)

Fixed::Fixed():fixedpointvalue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int x )
{
    std::cout << "Int constructor called" << std::endl;
    fixedpointvalue = (x << numbfracbits);
    return;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixedpointvalue = std::roundf(f * fixedpointone);
    return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=( const Fixed &op )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	this->fixedpointvalue = op.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedpointvalue);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedpointvalue = raw;
	return ;
}

Fixed::Fixed(Fixed const &op)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = op;
}

float Fixed::toFloat() const
{
    return ((float )fixedpointvalue / fixedpointone);
}

int Fixed::toInt() const
{
    return (fixedpointvalue >> numbfracbits);
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed)
{
    ostream << fixed.toFloat();
    return ostream;
}
