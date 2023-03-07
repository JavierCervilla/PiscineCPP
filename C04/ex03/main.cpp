/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:50:27 by pmedina-          #+#    #+#             */
/*   Updated: 2023/03/07 21:38:11 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"
#include "CharacterClass.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character();

	AMateria *tmp;
	tmp	= src->createMateria("ice");
	me->equip(tmp);
	tmp	= src->createMateria("cure");
	me->equip(tmp);

	////////////////////////////////////////////////////////////////

	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	tmp = src->createMateria("fire");

	////////////////////////////////////////////////////////////////

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	///////////////////////////////////////////////////////////////

	me->use(2, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);

	///////////////////////////////////////////////////////////////

	delete bob, delete me, delete src;
	return 0;
}
