/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrapClass.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:27:48 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 01:27:48 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_CLASS_HPP
# define DIAMOND_TRAP_CLASS_HPP
# include "FragTrapClass.hpp"
# include "ScavTrapClass.hpp"


class DiamondTrap: public FragTrap, public ScavTrap {
    private:
        std::string _name;

    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &src);
        virtual ~DiamondTrap(void);
        DiamondTrap &operator=(DiamondTrap const &src);
        void getStatus( void );
        void whoAmI( void );
        void attack( std::string const & target );
        std::string getName ( void );
};

#endif