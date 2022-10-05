/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:23:37 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 20:40:00 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaClass.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() : _type("undefined")
{
    std::cout << "Materia of type [" << RED << this->getType() << RESET << "] created with default constructor!" << std::endl;
}

AMateria::AMateria(std::string const  &type) : _type(type)
{
    std::cout << "Materia of type [" << RED << type << RESET << "] created with type constructor!" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	*this =  src;
	std::cout << "Materia of type [" << RED << this->_type << RESET << "] created with copy constructor!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "Materia of type [" << RED << this->_type << RESET << "] destructed!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &AMateria::getType() const {
	return  this->_type;
}

AMateria *AMateria::clone() const {
	std::cout << "Materia of type [" << RED << this->_type << RESET << "] cloned!" << std::endl;
	AMateria *tmp = new AMateria(this->getType());
	return  tmp;
}

void AMateria::use( ICharacter &target ) {
	std::cout << "Materia of  type [" << RED << this->getType() << "] used against [" << BLUE << "]" << RESET << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */