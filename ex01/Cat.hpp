#pragma once

#include <iostream>
#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& cpy);
	Cat &operator=(const Cat& cpy);
	virtual ~Cat();

	virtual void makeSound() const;
	std::string getIdea(int id);
	void setIdea(int id, std::string idea);
private:
	Brain *brain = new Brain();
};
