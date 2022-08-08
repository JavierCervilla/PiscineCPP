/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:18:58 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 16:27:52 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP
# include <iostream>
# include "colors.hpp"
# include "interfaces/ICharacter.hpp"

class AMateria
{
    protected:
        std::string  type;
    public : 
        AMateria(std::string const &type);
        ~AMateria( void );
        std::string const &getType() const; // Returns the materia type
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif