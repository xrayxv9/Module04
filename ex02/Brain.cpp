#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor called"<< std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called"<< std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "Brain copy constructor called"<< std::endl;
	*this = cpy;
}

Brain& Brain::operator=(const Brain& cpy)
{
	if (this != &cpy)
		for (int i = 0; i < 100; i++)
			this->ideas[i].assign(cpy.ideas[i]);
	return (*this);
}

void Brain::setIdea(int id, std::string idea)
{
	if (id > 100)
	{
		std::cout << "Sorry but you can't have more than 100 ideas" << std::endl;
		return ;
	}
	else if (id == 0)
	{
		std::cout << "Sorry but can you start counting at 1" << std::endl;
		return ;
	}
	else if (id < 0)
	{
		std::cout << "Sorry but you can't have less than 1 idea" << std::endl;
		return ;
	}
	this->ideas[id - 1] = idea;
}

std::string Brain::getIdea(int id)
{
	if (id > 100)
		return "Sorry but you can't have more than 100 ideas";
	else if (id == 0)
		return "Sorry but can you start counting at 1";
	else if (id < 0)
		return "Sorry but you can't have less than 1 idea";
	return (this->ideas[id - 1]);
}
