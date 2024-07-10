/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:50:25 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/07/08 20:57:47 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }


int main( void )
{
	std::cout << "1. Creating MateriaSource" << std::endl; 
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "2. \"src\" learning 5 materias" << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		std::cout << std::endl;
		Ice	*mat = new Ice();
		src->learnMateria(mat);
		// delete	mat;

		// std::cout << std::endl;
		src->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "3. Creating Character \"Berta\" and \"Alberto\"" << std::endl;
		Character* berta = new Character("Berta");
		// berta->printMaterias();
		std::cout << std::endl;

		Character* alberto = new Character("Alberto");
		// alberto->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "4. \"berta\" trying to equip 5 materias and \"alberto\" one materia" << std::endl;
		berta->equip(NULL);
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		berta->equip(tmp);
		tmp = src->createMateria("ice");
		berta->equip(tmp);
		tmp = src->createMateria("cure");
		berta->equip(tmp);
		tmp = src->createMateria("cure");
		berta->equip(tmp);
		tmp = src->createMateria("ice");
		berta->equip(tmp);
		
		std::cout << std::endl;
		berta->printMaterias();

		std::cout << std::endl;
		tmp = src->createMateria("ice"); //esto lo pongo yo
		alberto->equip(tmp);
		alberto->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "5. Testing Character Assignation overload \"berta = alberto\" for deep copy and changed berta afterwards" << std::endl;	
		*alberto = *berta;
		
		berta->unequip(0);
		std::cout << "Berta's Materials" << std::endl;
		berta->printMaterias();
		std::cout << std::endl;

		std::cout << "Alberto's Materials" << std::endl;
		alberto->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "6. Testing character copy constructor for deep copy \"Nuria = Character(berta)\" and changed berta afterwards" << std::endl;
		
		std::cout << "Berta's Materials" << std::endl;
		berta->printMaterias();
		Character* nuria = new Character(*berta);
		std::cout << "Nuria's Materials" << std::endl;
		nuria->printMaterias();

		tmp = src->createMateria("ice");
		berta->equip(tmp);
		std::cout << "Berta's Materials" << std::endl;
		berta->printMaterias();
		std::cout << std::endl;

		std::cout << "Nuria's Materials" << std::endl;
		nuria->printMaterias();


	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	
	std::cout << "7. \"Berta\" using all equiped materias on \"Alberto\" " << std::endl;
		berta->use(0, *alberto);
		berta->use(1, *alberto);
		berta->use(2, *alberto);
		berta->use(3, *alberto);
		berta->use(10, *alberto);
		berta->use(-1, *alberto);
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "8. \"Berta\" trying to use unequiped materias on \"Alberto\" " << std::endl;
		berta->unequip(0);
		berta->use(0, *alberto);

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "9. New character \"kirby\" equipping and unequipping materias" << std::endl;
		ICharacter* kirby = new Character("kirby");
		AMateria *cure = new Cure;
		AMateria *ice = new Ice;

		kirby->equip(cure);
		kirby->equip(ice);
		kirby->equip(cure);
		kirby->equip(ice);
		kirby->unequip(0);
		kirby->unequip(1);
		kirby->unequip(2);
		kirby->unequip(3);
		kirby->equip(cure);
		kirby->equip(ice);

		kirby->printMaterias();
		kirby->printFloor();

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "10. Testing if unequiped materia is freed" << std::endl;

		ICharacter* test = new Character("test");
		
		tmp = src->createMateria("ice");
		test->equip(tmp);
		test->unequip(0);

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << "11. Deleting \"Berta\", \"Alberto\", \"Nuria\" and \"Kirby\"" << std::endl;
	
	delete test;
	delete kirby;
	delete nuria;
	delete alberto;
	delete berta;
	delete src;

	return (0);
}
