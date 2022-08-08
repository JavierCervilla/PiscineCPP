/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:50:27 by pmedina-          #+#    #+#             */
/*   Updated: 2022/08/08 21:38:22 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"
#include "AMateriaClass.hpp"
#include "CharacterClass.hpp"
#include "Ice.cpp"
#include "Cure.cpp"

void leakicious() {
	system("leaks bob");
}

int main() {

	//atexit(leakicious);

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character();

	AMateria *tmp;
	tmp	= src->createMateria("ice");
	me->equip(tmp);
	tmp	= src->createMateria("cure");
	me->equip(tmp);

	////////////////////////////////////////////////////////////////
	/*
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	
	tmp = src->createMateria("fire");
	*/
	////////////////////////////////////////////////////////////////

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	///////////////////////////////////////////////////////////////
	/*
	me->use(2, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
	*/
	///////////////////////////////////////////////////////////////

	delete bob, delete me, delete src;

	//system("leaks bob");
	
	return 0;
}
