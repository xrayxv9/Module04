#pragma once

#include <iostream>
#include <WrongAnimal.hpp>

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(std::string type);
	WrongDog(const WrongDog& cpy);
	WrongDog &operator=(const WrongDog& cpy);
	virtual ~WrongDog();

	void makeSound() const;
};
