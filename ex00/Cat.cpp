#include <Cat.hpp>

Cat::Cat()
{
	this->type = "Cat";
	return ;
}

Cat::Cat( std::string type )
{
	this->type = type;
}

Cat::~Cat()
{
	return ;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
}

Cat &Cat::operator=(const Cat& cpy)
{
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
