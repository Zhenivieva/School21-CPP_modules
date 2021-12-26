//
// Created by Marleen Maryjane on 8/7/21.
//

#ifndef PHONEBOOK_PHONEBOOK_HPP
#define PHONEBOOK_PHONEBOOK_HPP

#include <iostream>
#include "user.hpp"

class Phonebook {
private:
	User users[8];
	int numberOfUsers;

public:
	Phonebook();
	~Phonebook();

	void addUser();
	void searchAll();
	void searchOne(std::string forIndex);
	void printShortString(std::string str);
};

#endif //PHONEBOOK_PHONEBOOK_HPP
