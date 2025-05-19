#include <WrongDog.hpp>

WrongDog::WrongDog()
{
	this->type = "WrongDog";
}

WrongDog::WrongDog( std::string type )
{
	this->type = type;
	return ;
}

WrongDog::~WrongDog()
{
	return ;
}

WrongDog::WrongDog(const WrongDog& cpy)
{
	*this = cpy;
}

WrongDog &WrongDog::operator=(const WrongDog& cpy)
{
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

void WrongDog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
