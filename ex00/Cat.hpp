#pragma once

#include <iostream>
#include <Animal.hpp>

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat& cpy);
	Cat &operator=(const Cat& cpy);
	virtual ~Cat();

	virtual void makeSound() const;
};
