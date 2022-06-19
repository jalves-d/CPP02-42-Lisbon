#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->fixedpointvalue = 0;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpyfixed){
	std::cout << "Copy constructor called" << std::endl;
	this->fixedpointvalue = cpyfixed.getRawBits();
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->fixedpointvalue = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedpointvalue);
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedpointvalue = raw;
}
