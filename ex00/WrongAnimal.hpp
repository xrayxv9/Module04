#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal( std::string type);
		virtual	~WrongAnimal();
		WrongAnimal( const WrongAnimal& self );
		WrongAnimal &operator=( const WrongAnimal& self);

		void makeSound() const;
		std::string	getType() const; 
};
