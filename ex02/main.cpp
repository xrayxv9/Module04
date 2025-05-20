#include <iostream>
#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongDog.hpp>
#include <WrongCat.hpp>
   
int main()
{
	Animal *dog = new Dog();
	Animal *cat = new Cat();
	// Animal *animal = new Animal();
        
	delete dog;
	delete cat;
	// delete animal;
}    
