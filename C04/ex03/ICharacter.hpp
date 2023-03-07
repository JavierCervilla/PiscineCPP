/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:22:17 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 17:22:21 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <ostream>
# include "AMateriaClass.hpp"

class AMateria;
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter &target) = 0;
};

#endif