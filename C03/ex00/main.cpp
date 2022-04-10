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

#include "ClapTrapClass.hpp"
#include <iostream>

int main(void)
{
    ClapTrap noName;
    ClapTrap claptrap("With Name");
    noName.attack(claptrap.getName());
    claptrap.takeDamage(noName.getAttackDamage());
    claptrap.beRepaired(10);
    std::cout << "Claptrap [" << claptrap.getName() << "] has " << claptrap.getHitPoints() << " hit points and " << claptrap.getEnergyPoints() << " energy points." << std::endl;
    std::cout << "NoName [" << noName.getName() << "] has " << noName.getHitPoints() << " hit points and " << noName.getEnergyPoints() << " energy points." << std::endl;
    noName = claptrap;
    std::cout << "Claptrap [" << claptrap.getName() << "] has " << claptrap.getHitPoints() << " hit points and " << claptrap.getEnergyPoints() << " energy points." << std::endl;
    std::cout << "NoName [" << noName.getName() << "] has " << noName.getHitPoints() << " hit points and " << noName.getEnergyPoints() << " energy points." << std::endl;
    return 0;
}