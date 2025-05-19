#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called"<< std::endl;
	type = "Solanum";
}

Animal::Animal( std::string type )
{
	std::cout << "Animal constructor called"<< std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called"<< std::endl;
	return ;
}
Animal::Animal( const Animal& self )
{
	std::cout << "Animal copy constructor called"<< std::endl;
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
