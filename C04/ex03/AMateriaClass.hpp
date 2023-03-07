/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:17:58 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 18:29:57 by jcervill         ###   ########.fr       */
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

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif