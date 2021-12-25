//
// Created by Marleen Maryjane on 8/14/21.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
	std::string _type;


public:
	Weapon();
	Weapon(const std::string type);
	~Weapon();

	void setType(const std::string type);
	const std::string &getType() const;
};

#endif //WEAPON_HPP

