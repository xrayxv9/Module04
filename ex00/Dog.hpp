#pragma once

#include <iostream>
#include <Animal.hpp>

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& cpy);
	Dog &operator=(const Dog& cpy);
	virtual ~Dog();

	virtual void makeSound() const;
};
