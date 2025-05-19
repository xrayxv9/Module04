#include <iostream>
#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongDog.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal *mix[100];

	std::cout << "\033[1;34mCREATION\033[1;0m" << std::endl << std::endl << std::endl;
	for (int i = 0; i < 50; i++)
		mix[i] = new Dog();
	for (int i = 50; i < 100; i++)
		mix[i] = new Cat();

	std::cout << "\033[1;34mTESTING REMOVALS\033[1;0m" << std::endl << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
		delete mix[i];
	std::cout << "\033[1;34mIMPLEMENTING IDEAS\033[1;0m" << std::endl << std::endl << std::endl;
	
	Dog *dog = new Dog();
	Dog *dogCpy = new Dog();
	dog->setIdea(1, "Im gonna play outside");
	dog->setIdea(2, "Im gonna snif everything I can see");
	dog->setIdea(102, "Im gonna snif everything I can see");
	dog->setIdea(0, "Im gonna snif everything I can see");
	dog->setIdea(-1, "Im gonna snif everything I can see");

	std::cout << (dog->getIdea(1).empty()?  "NULL":dog->getIdea(1)) << std::endl;
	std::cout << (dog->getIdea(2).empty()?  "NULL":dog->getIdea(2)) << std::endl;
	std::cout << (dog->getIdea(3).empty()?  "NULL":dog->getIdea(3)) << std::endl;

	std::cout << "\033[1;34mTESTING DEEP COPY\033[1;0m" << std::endl << std::endl << std::endl;
	*dogCpy = *dog;
	std::cout << (dog->getIdea(2).empty()?  "NULL":dog->getIdea(2)) << std::endl;
	std::cout << (dogCpy->getIdea(2).empty()?  "NULL":dogCpy->getIdea(2)) << std::endl;
	dog->setIdea(2, "Im gonna sleep");
	std::cout << (dog->getIdea(2).empty()?  "NULL":dog->getIdea(2)) << std::endl;
	std::cout << (dogCpy->getIdea(2).empty()?  "NULL":dogCpy->getIdea(2)) << std::endl;

	delete dog;
	delete dogCpy;
	return 0;
}
