#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Solanum";
}

WrongAnimal::WrongAnimal( std::string type )
{
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	return ;
}
WrongAnimal::WrongAnimal( const WrongAnimal& self )
{
	*this = self;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& self)
{
	if (this != &self)
		this->type = self.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I hope you don't mind if I think of you as a friend" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
