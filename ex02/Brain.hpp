#pragma once

#include <iostream>
class Brain
{
public :
	Brain();
	~Brain();
	Brain& operator=(const Brain& cpy);
	Brain(const Brain& cpy);
	std::string	ideas[100];

	std::string getIdea(int id);
	void setIdea(int id, std::string idea);
};
