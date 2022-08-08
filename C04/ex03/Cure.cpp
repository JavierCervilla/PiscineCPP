#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
    std::cout << "❤️ Materia of type [" << RED << this->getType() << RESET << "] created with default constructor!" << std::endl;
}

Cure::Cure( const Cure & src ) : AMateria(src)
{
    std::cout << "❤️ Materia of type [" << RED << this->getType() << RESET << "] created with copy constructor!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "❤️ Materia of type [" << RED << this->_type << RESET << "] destructed!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	o << "❤️ Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria *Cure::clone() const {
	std::cout << "❤️ Materia of type [" << RED << this->_type << RESET << "] cloned!" << std::endl;
	return new Cure();
}

void Cure::use( ICharacter &target ) {
	std::cout << "❤️ heals [" << RED << target.getName() << RESET << "] ❤️" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */