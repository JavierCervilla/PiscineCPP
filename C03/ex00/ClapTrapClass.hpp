/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:43:12 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/10 13:43:12 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_CLASS_HPP
# define CLAP_TRAP_CLASS_HPP
# include <iostream>
# include <string>
# include "colors.hpp"

class ClapTrap {
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap(void);
        ClapTrap &operator=(ClapTrap const &src);

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;
        virtual void getStatus( void );
};

#endif