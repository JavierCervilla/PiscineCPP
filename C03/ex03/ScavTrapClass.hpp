/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:28:37 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 12:38:05 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_CLASS_HPP
# define SCAV_TRAP_CLASS_HPP
# include "ClapTrapClass.hpp"

class ScavTrap: public virtual ClapTrap {
    private:
        bool _gateKeeper;
        static const unsigned int _energyPoints = 50;

    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);
        ScavTrap &operator=(ScavTrap const &src);

        void guardGate( void );
        void getStatus( void );
};

#endif