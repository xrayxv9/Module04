#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal( std::string type);
		virtual	~Animal();
		Animal( const Animal& self );
		Animal &operator=( const Animal& self);

		virtual void makeSound() const = 0;
		std::string getType() const;
};
