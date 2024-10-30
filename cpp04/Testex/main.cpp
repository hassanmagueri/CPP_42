#include "Dog.hpp"
#include "Cat.hpp"


int main()
{


	// // const Animal *meta = new Animal();
	// // const Animal *j = new Dog();
	// // const Animal *i = new Cat();
	// // std::cout << j->getType() << " \033[0m" << std::endl;
	// // std::cout << i->getType() << " \033[0m" << std::endl;
	// // i->makeSound(); // will output the cat sound!
	// // j->makeSound();
	// // meta->makeSound();

	// // delete meta;

	// // Cat tmp = Cat();
	// // Animal &cat = tmp;
	// // std::cout << sizeof(Animal) << std::endl;
	// // std::cout << sizeof(Cat) << std::endl;
	// // cat.makeSound();
	// // delete cat;

	// Animal cat = Cat();
	// // Animal &animal = cat;
	// cat.makeSound();
	Cat cat = Cat();
	Animal *obj = &cat;
	std::cout << obj->a << std::endl;

	// // cat.makeSound();

	// delete obj;
}
