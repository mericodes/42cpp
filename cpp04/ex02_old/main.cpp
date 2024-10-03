/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:24:50 by codespace         #+#    #+#             */
/*   Updated: 2024/07/03 19:48:27 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//const Animal* nope = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	j->makeSound();
	i->makeSound();

	delete j;
	delete i;
	return 0;
}
