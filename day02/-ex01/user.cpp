//
// Created by Marleen Maryjane on 8/7/21.
//

#include "user.hpp"
User::User() {}

User::~User() {}

std::string User::getFirstName() {return User::firstName;}
std::string User::getLastName() {return User::lastName;}
std::string User::getNickname() {return User::nickname;}
std::string User::getPhoneNumber() {return User::phoneNumber;}
std::string User::getDarkestSecret() {return User::darkestSecret;}

void User::setFirstName(std::string str)
{
	User::firstName = str;
}
void User::setLastName(std::string str)
{
	User::lastName = str;
}
void User::setNickname(std::string str)
{
	User::nickname = str;
}
void User::setPhoneNumber(std::string str)
{
	User::phoneNumber = str;
}
void User::setDarkestSecret(std::string str)
{
	User::darkestSecret = str;
}