#pragma once

#include <iostream>
#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& cpy);
	Dog &operator=(const Dog& cpy);
	virtual ~Dog();

	virtual void makeSound() const;
	void	setIdea(int id, std::string idea);
	std::string getIdea(int id);

private:
	Brain *brain = new Brain();
};
