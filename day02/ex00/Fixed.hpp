//
// Created by Marleen Maryjane on 12/26/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _fPointValue;
		static const int _fBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed& operator=(const Fixed &rhs);
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif //FIXED_HPP
