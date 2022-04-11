/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:58:58 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 12:50:49 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrapClass.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap noName;
    noName.getStatus();
    DiamondTrap diamondtrap("With Name");
    diamondtrap.getStatus();

    noName.attack(diamondtrap.getName());
    diamondtrap.takeDamage(noName.getAttackDamage());
    diamondtrap.beRepaired(10);
    diamondtrap.getStatus();
    noName.getStatus();
    noName = diamondtrap;
    noName.getStatus();
    noName.getStatus();
    noName.setName("New Name");
    noName.highFivesGuys();
    noName.guardGate();
    noName.getStatus();
    noName.highFivesGuys();
    noName.getStatus();
    return 0;
}