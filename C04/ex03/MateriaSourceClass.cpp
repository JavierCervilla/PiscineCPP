/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:51:42 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 19:02:34 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource( void ) {
    std::cout << "MateriaSource created with defalt constructor" << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource destroyed with default destructor!" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &src) {
    *this = src;
    std::cout << "MateriaSource created with copy constructor!" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src) {
if (this != &src)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->_materias[i] = (src._materias[i]) ? src._materias[i]->clone() : NULL;
	}
	return *this;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    if (type == "cure") {
        return new Cure();
    } else if (type == "ice") {
        return new Ice();
    } else {
        return 0;
    }
}

void MateriaSource::learnMateria(AMateria *m) {
    if (m) {
        for (int i = 0; i < 4; i++) {
            if (!this->_materias[i]) {
                this->_materias[i] = m;                
            }            
        }
    }
}