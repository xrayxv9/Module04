#include <WrongCat.hpp>

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat( std::string type )
{
	this->type = type;
}

WrongCat::~WrongCat()
{
	return ;
}

WrongCat::WrongCat(const WrongCat& cpy)
{
	*this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat& cpy)
{
	if (this != &cpy)
		this->type = cpy.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
