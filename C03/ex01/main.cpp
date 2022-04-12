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
    noName.getStatus();
    ScavTrap scavtrap("With Name");
    scavtrap.getStatus();

    noName.attack(scavtrap.getName());
    scavtrap.takeDamage(noName.getAttackDamage());
    scavtrap.beRepaired(10);
    scavtrap.getStatus();
    noName.getStatus();
    noName = scavtrap;
    noName.getStatus();
    noName.getStatus();
    noName.setName("New Name");
    noName.guardGate();
    noName.getStatus();
    noName.guardGate();
    noName.getStatus();
    return 0;
}