#include <Brain.hpp>
#include <Dog.hpp>

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( std::string type )
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = type;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(const Dog& cpy)
{
	if (this != &cpy)
	{
		delete this->brain;
		this->brain = new Brain(*cpy.brain);
		this->type = cpy.type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void Dog::setIdea(int id, std::string idea)
{
	this->brain->setIdea(id, idea);
}

std::string Dog::getIdea(int id)
{
	return this->brain->getIdea(id);
}
