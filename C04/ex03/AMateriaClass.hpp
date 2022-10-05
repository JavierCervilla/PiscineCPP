/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:17:58 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 21:22:46 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "colors.hpp"

class AMateria
{
	protected:
		std::string  _type;

	public:

		AMateria();
		AMateria(std::string const &type);

		AMateria( AMateria const & src );
		~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const &getType() const; // Returns the materia type
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif