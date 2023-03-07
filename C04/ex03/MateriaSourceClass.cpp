/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:51:42 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 21:59:22 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource created with defalt constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++) {
        delete this->_materias[i];
    }
    std::cout << "MateriaSource destroyed with default destructor!" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &src)
{
    *this = src;
    std::cout << "MateriaSource created with copy constructor!" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4 && src._materias[i] != NULL; i++)
            this->_materias[i] = (src._materias[i]) ? src._materias[i]->clone() : NULL;
    }
    return *this;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    if (type == "cure")
    {
        return new Cure();
    }
    else if (type == "ice")
    {
        return new Ice();
    }
    else
    {
        return 0;
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!this->_materias[i])
            {
                this->_materias[i] = m;
            }
        }
    }
}