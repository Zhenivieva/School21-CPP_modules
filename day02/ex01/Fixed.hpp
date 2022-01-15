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
		Fixed& operator=(const Fixed &rhs);
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif //FIXED_HPP
