//
// Created by Marleen Maryjane on 24/12/21.
//

#include <iostream>
#include <string>
#include <fstream>

std::string stringToUpper(std::string oFileName)
{
	std::string str;

	for (int i = 0; oFileName[i]; i++)
	{
		if (oFileName[i] >= 'a' && oFileName[i] <= 'z')
			oFileName[i] -= 32;
		str += oFileName[i];
	}
	return (str);
}

void replaceStrings(std::ifstream &iFile, std::ofstream &oFile, std::string &s1,
					std::string &s2)
{
	std::string buf;
	std::string part1;
	std::string part2;
	unsigned long beginIndex;

	while (getline(iFile, buf))
	{
		while ((beginIndex = buf.find(s1)) != std::string::npos)
		{
			part1 = buf.substr(0, beginIndex);
			part2 = buf.substr(part1.size() + s1.length());
			buf = part1 + s2 + part2;
		}
		oFile << buf << std::endl;
	}
}
int checkStrings(std::string &s1, std::string &s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << "empty string" << std:: endl;
		return (-1);
	}
	if (s2.find(s1) != std::string::npos)
	{
		std::cerr << "There can be an infinity cycle, "
					 "choose other strings" << std:: endl;
		return (-1);
	}
	return (0);
}

int processFile(char **argv)
{
	std::string oFileName = argv[1];
	std::ifstream iFile;
	std::ofstream oFile;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (checkStrings(s1, s2) == -1)
		return (-1);
	iFile.open(argv[1]);
	if (!(iFile.is_open()))
	{
		std::cerr << "can't open file" << std:: endl;
		return (-1);
	}
	oFile.open(stringToUpper(oFileName) + ".replace", std::ofstream::trunc);
	if (!(oFile.is_open()))
		std::cerr << "Error while opening a new file" << std:: endl;
	else
		replaceStrings(iFile, oFile, s1, s2);
	iFile.close();
	oFile.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "bad arguments" << std::endl;
		return (-1);
	}
	else if (processFile(argv) == -1)
			return (-1);
	std::cout << "Finished" << std::endl;
	return (0);
}