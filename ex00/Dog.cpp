#include <Dog.hpp>

Dog::Dog()
{
	this->type = "Dog";
}

Dog::Dog( std::string type )
{
	this->type = type;
	return ;
}

Dog::~Dog()
{
	return ;
}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
}

Dog &Dog::operator=(const Dog& cpy)
{
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
