#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		virtual	~Animal();
		Animal( const Animal& self );
		Animal &operator=( const Animal& self);

};
