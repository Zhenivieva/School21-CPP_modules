//
// Created by Marleen Maryjane on 12/26/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fPointValue;
		static const int _fBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed(float const n);
		Fixed(int const n);

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;

		Fixed& operator=(const Fixed &rhs);
//overload compar:
		bool operator>(Fixed const &rhs);
		bool operator>=(Fixed const &rhs);
		bool operator<(Fixed const &rhs);
		bool operator<=(Fixed const &rhs);
		bool operator==(Fixed const &rhs);
		bool operator!=(Fixed const &rhs);
//overloads math:
		Fixed operator+(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator*(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);

//incr and decr:
		Fixed operator++(int);
		Fixed &operator++();
		Fixed operator--(int);
		Fixed &operator--();

//min, max:
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
//overload min, max:
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif //FIXED_HPP
