/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:22:17 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 16:41:25 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <ostream>
# include "../AMateriaClass.hpp"

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