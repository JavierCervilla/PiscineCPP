/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:58:58 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/09 18:17:58 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrapClass.hpp"
#include <iostream>

int main(void)
{
    ScavTrap noName;
    ScavTrap scavtrap("With Name");
    noName.attack(scavtrap.getName());
    scavtrap.takeDamage(noName.getAttackDamage());
    scavtrap.beRepaired(10);
    std::cout << "scavtrap [" << scavtrap.getName() << "] has " << scavtrap.getHitPoints() << " hit points and " << scavtrap.getEnergyPoints() << " energy points." << std::endl;
    std::cout << "NoName [" << noName.getName() << "] has " << noName.getHitPoints() << " hit points and " << noName.getEnergyPoints() << " energy points." << std::endl;
    noName = scavtrap;
    std::cout << "scavtrap [" << scavtrap.getName() << "] has " << scavtrap.getHitPoints() << " hit points and " << scavtrap.getEnergyPoints() << " energy points." << std::endl;
    std::cout << "NoName [" << noName.getName() << "] has " << noName.getHitPoints() << " hit points and " << noName.getEnergyPoints() << " energy points." << std::endl;
    
    return 0;
}