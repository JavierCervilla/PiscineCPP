/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:51:42 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 13:16:45 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"

MateriaSource::MateriaSource(void) : _materias()
{
    std::cout << "MateriaSource created with defalt constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_materias[i];
    }
    std::cout << "MateriaSource destroyed with default destructor!" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = src._materias[i]->clone();
    }
    std::cout << "MateriaSource created with copy constructor!" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4 && src._materias[i] != NULL; i++)
            this->_materias[i] = src._materias[i]->clone();
    }
    return *this;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
            return this->_materias[i]->clone();
    }
    return 0;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            break;
        }
    }
}