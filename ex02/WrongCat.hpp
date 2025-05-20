#pragma once

#include <iostream>
#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& cpy);
	WrongCat &operator=(const WrongCat& cpy);
	virtual ~WrongCat();

	void makeSound() const;
};
