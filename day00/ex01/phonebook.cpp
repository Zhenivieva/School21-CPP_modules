#include <iostream>

#include "phonebook.hpp"

Phonebook::Phonebook() { Phonebook::numberOfUsers = 0;}

Phonebook::~Phonebook() {}

void Phonebook::addUser()
{
	int i = Phonebook::numberOfUsers;
	if (i > 7)
		i %= 8;
	std::string str;

	std::cout << "First name: ";
	std::cin >> str;
	Phonebook::users[i].setFirstName(str);
	std::cout << "Last name: ";
	std::cin >> str;
	Phonebook::users[i].setLastName(str);
	std::cout << "Nickname: ";
	std::cin >> str;
	Phonebook::users[i].setNickname(str);
	std::cout << "Phone number: ";
	std::cin >> str;
	Phonebook::users[i].setPhoneNumber(str);
	std::cout << "Darkest secret: ";
	std::cin >> str;
	Phonebook::users[i].setDarkestSecret(str);
	Phonebook::numberOfUsers++;
}

void Phonebook::printShortString(std::string str)
{
	std::string str1;
	if (str.length() > 10)
	{
		str1 = str.substr(0, 10);
		str1[9] = '.';
	}
	else
		str1 = str.substr(0, 10);
	std::cout.width(10);
	std::cout << str1;
	std::cout << '|';
}

void Phonebook::searchOne(std::string forIndex)
{
	int			index;

	if (forIndex.length() != 1 || forIndex[0] - '0' < 1 ||
		forIndex[0] - '0' > this->numberOfUsers || forIndex[0] - '0' > 8)
		std::cout << "Wrong index" << std::endl;
	else
	{
		index = int(forIndex[0] - '0');
		std::cout << "User's " << index << " information: " << std::endl;
		std::cout << "First name: " << users[index - 1].getFirstName() << std::endl;
		std::cout << "Last name: " << users[index - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << users[index - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << users[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << users[index - 1].getDarkestSecret() << std::endl;
	}
}

void Phonebook::searchAll()
{
	std::string forIndex;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First name| Last name| Nickname |" << std::endl;
	for (int i = 0; (i < Phonebook::numberOfUsers && i < 8) ; i++)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << '|';
		std::cout.width(10);
		std::cout << i + 1;
		std::cout << '|';
		printShortString(Phonebook::users[i].getFirstName());
		printShortString(Phonebook::users[i].getLastName());
		printShortString(Phonebook::users[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	if (this->numberOfUsers > 0)
	{
		std::cout << "To see the full user's information enter the index of user:" << std::endl;
		std::cin >> forIndex;
		searchOne(forIndex);
	}
}
