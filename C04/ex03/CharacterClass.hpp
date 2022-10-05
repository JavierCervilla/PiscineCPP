/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:38:51 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 21:36:25 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP
# include <ostream>
# include "colors.hpp"
# include "ICharacter.hpp"
# include "AMateriaClass.hpp"

class Character : virtual public ICharacter {
    protected:
        std::string _name;
        AMateria *_materias[4];
    public:
        Character ( void );
        Character (std::string name);
        Character (Character const &src);
        virtual ~Character ( void );

        Character& operator=(Character const &src);

        virtual std::string const& getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif