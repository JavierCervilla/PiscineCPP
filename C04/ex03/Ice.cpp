#include "AMateriaClass.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
    std::cout << "🥶 Materia of type [" << RED << this->getType() << RESET << "] created with default constructor!" << std::endl;
}

Ice::Ice( const Ice & src ): AMateria(src)
{
    std::cout << "🥶 Materia of type [" << RED << this->getType() << RESET << "] created with copy constructor!" << std::endl;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "🥶 Materia of type [" << RED << this->_type << RESET << "] destructed!" << std::endl;
}
 

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "🥶 Type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria *Ice::clone() const {
	std::cout << "🥶 Materia of type [" << RED << this->_type << RESET << "] cloned!" << std::endl;
	return new Ice();
}

void Ice::use( ICharacter &target ) {
	std::cout << "🥶 shoots an ice bolt at [" << BLUE << target.getName() << RESET << "] 🥶" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */