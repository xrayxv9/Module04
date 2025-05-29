#include <iostream>
#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << "\033[1;34m NORMAL ANIMALS\033[0m" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	std::cout << "\033[1;34m WRONG ANIMALS\033[0m" << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	std::cout << wrong_meta->getType() << " " << std::endl;
	wrong_cat->makeSound();
	wrong_meta->makeSound();

	delete meta;
	delete cat;
	delete dog;
	delete wrong_meta;
	delete wrong_cat;


	const Animal *coucou = new Cat();
	const Cat *coucou2 = new Cat();

	coucou->makeSound();
	coucou2->makeSound();

	delete coucou2;
	delete coucou;
	return 0;
}
