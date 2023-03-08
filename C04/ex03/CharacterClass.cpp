/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:49:32 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 12:20:26 by javier           ###   ########.fr       */
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
    std::cout << "Character of type [" << RED << this->_name << RESET << "] born with copy constructor!" << std::endl;
}

Character::~Character(){
    std::cout << "Character of type [" << RED << this->_name << RESET << "] died with default destructor!" << std::endl;
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
    for (i = 0; i < 4; i++)
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            std::cout << "Character [" << RED << this->_name << RESET << "] added [" << BLUE << this->_materias[i]->getType() << RESET << "] to inventory" << std::endl;
            break;
        }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_materias[idx] != NULL)
        this->_materias[idx]->use(target);
}