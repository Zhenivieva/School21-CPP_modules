//
// Created by Marleen Maryjane on 8/7/21.
//

#ifndef PHONEBOOK_USER_HPP
#define PHONEBOOK_USER_HPP
#include <iostream>

class User {
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	User();
	~User();

	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void setPhoneNumber(std::string str);
	void setDarkestSecret(std::string str);

	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

#endif //PHONEBOOK_USER_HPP
