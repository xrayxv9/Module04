#include "Animal.hpp"

Animal::Animal()
{
	type = "Solanum";
}

Animal::Animal( std::string type )
{
	this->type = type;
}

Animal::~Animal()
{
	return ;
}
Animal::Animal( const Animal& self )
{
	*this = self;
}

Animal& Animal::operator=( const Animal& self)
{
	if (this != &self)
		this->type = self.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "I hope you don't mind if I think of you as a friend" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
