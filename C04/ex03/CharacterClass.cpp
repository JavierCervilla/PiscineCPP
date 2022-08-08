/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:49:32 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 21:36:12 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharacterClass.hpp"

Character::Character(void) : _name("StumbleGuy")
{
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
    }
    std::cout << "Character of type [" << RED << this->_name << RESET << "] born with default constructor!" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
    }
    std::cout << "Character of type [" << RED << this->_name << RESET << "] born with name constructor!" << std::endl;
}

Character::Character(Character const &src)
{
    *this = src;
    std::cout << "Character of type [" << RED << this->_name << RESET << "] born with copy constructor!" << std::endl;
}

std::string const &Character::getName() const
{
    return this->_name;
}

Character &Character::operator=(Character const &src)
{
    this->_name = src.getName();
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL)
        {
            delete this->_materias[i];
            this->_materias[i] = NULL;
        }
        this->_materias[i] = src._materias[i]->clone();
    }
    return *this;
}

void Character::equip(AMateria *m)
{
    int i = 0;
    for (i = 0; this->_materias[i] != NULL; i++)
        if (i < 4)
        {
            this->_materias[i] = m->clone();
            std::cout << "Character [" << RED << this->_name << RESET << "] added [" << BLUE << m->getType() << RESET << "] to inventory" << std::endl;
        }
        else
        {
            std::cout << "Character [" << RED << this->_name << RESET << "] has full inventory and cannot add [" << BLUE << m->getType() << RESET << "] to inventory" << std::endl;
        }
}

void Character::unequip(int idx)
{
    int i;
    for (i = idx; i < 3 && this->_materias[i + 1] != NULL; i++)
    {
        AMateria *temp = this->_materias[i];
        this->_materias[i] = this->_materias[i + 1];
        this->_materias[i + 1] = temp;
    }
    this->_materias[i] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_materias[idx]->getType() == "cure")
    {
        std::cout << "* heals " << RED << target.getName() << RESET << " wounds" << std::endl;
    }
    else
    {
        std::cout << "* shoots an ice bolt at" << RED << target.getName() << RESET << std::endl;
    }
}