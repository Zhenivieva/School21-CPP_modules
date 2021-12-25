//
// Created by Marleen Maryjane on 12/24/21.
//

#ifndef KAREN_KAREN_HPP
#define KAREN_KAREN_HPP

#include <iostream>

class Karen {
private:
	void _debug();
	void _info();
	void _warning();
	void _error();
	void _unknown();
public:
	void complain(std::string level);
};

#endif //KAREN_KAREN_HPP
