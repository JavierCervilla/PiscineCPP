/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:17:58 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 21:22:04 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP
# include <iostream>
# include <string>
# include "colors.hpp"
# include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string  _type;

	public:

		AMateria();
		AMateria(std::string const &type);

		AMateria( AMateria const & src );
		virtual ~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const &getType() const; // Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

class Ice :  public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &		operator=( Ice const & rhs );

		AMateria *clone() const;
		void use(ICharacter &target);
};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		AMateria *clone() const;
		void use(ICharacter &target);
};

std::ostream &			operator<<( std::ostream & o, Cure const & i );


#endif