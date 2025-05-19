#include <Cat.hpp>

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called"<< std::endl;
	return ;
}

Cat::Cat( std::string type )
{
	std::cout << "Cat constructor called"<< std::endl;
	this->type = type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& cpy)
{
	std::cout << "Cat copy constructor called" << std::endl;
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

void Cat::setIdea(int id, std::string idea)
{
	this->brain->setIdea(id, idea);
}

std::string Cat::getIdea(int id)
{
	return this->brain->getIdea(id);
}
