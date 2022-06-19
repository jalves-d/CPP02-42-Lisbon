
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

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;
		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed &f1, Fixed &f2);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif
