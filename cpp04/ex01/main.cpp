/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:24:50 by codespace         #+#    #+#             */
/*   Updated: 2024/09/19 14:37:59 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--------------------ANIMAL ARRAY TEST--------------------" << std::endl;
	Animal* animals[10];

	for (int a = 0; a < 5; a++)
	{	
		std::cout << "Animal number: " << (a + 1) << std::endl;
		animals[a] = new Dog();
		std::cout << std::endl;
	}
	for (int a = 5; a < 10; a++)
	{	
		std::cout << "Animal number: " << (a + 1) << std::endl;
		animals[a] = new Cat();
		std::cout << std::endl;
	}
	for (int a = 0; a < 10; a++)
	{
		std::cout << animals[a]->getType() << " " << std::endl;
		animals[a]->makeSound();
	}
	std::cout << std::endl;
	for (int a = 0; a < 10; a++)
	{
		delete animals[a];
		std::cout << std::endl;
	}
	
	std::cout << "--------------------DOG BRAIN TEST--------------------" << std::endl;	

	Dog	dog;
	
	std::cout << "Dog is a " << dog.getType() << ", and his brain pointer is: " << dog.getBrain() << std::endl;
	std::cout << "We are going to print idea number 3 (default value): " << std::endl;
	dog.getBrain()->printIdea(3);
	std::cout << "Now we are going to set a new idea on index number 3 calling the setIdeas() member function" << std::endl;
	dog.getBrain()->setIdeas("NEW IDEA!!!", 3);
	std::cout << "We are going to print idea number 3 (new value): " << std::endl;
	dog.getBrain()->printIdea(3);
	
	std::cout << "--------------------CAT BRAIN TEST--------------------" << std::endl;
	std::cout << "Now we do the same but with the cat!" << std::endl;
	
	Cat	cat;

	std::cout << "Cat is a " << cat.getType() << ", and his brain pointer is: " << cat.getBrain() << std::endl;
	std::cout << "We are going to print idea number 3 (default value): " << std::endl;
	cat.getBrain()->printIdea(3);
	std::cout << "Now we are going to set a new idea on index number 3 calling the setIdeas() member function" << std::endl;
	cat.getBrain()->setIdeas("NEW IDEA!!!", 3);
	std::cout << "We are going to print idea number 3 (new value): " << std::endl;
	cat.getBrain()->printIdea(3);
	
	std::cout << "--------------------END OF TESTS--------------------" << std::endl;

	return 0;
}
