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

#include "FragTrapClass.hpp"
#include <iostream>

int main(void)
{
    FragTrap noName;
    noName.getStatus();
    FragTrap fragtrap("With Name");
    fragtrap.getStatus();

    noName.attack(fragtrap.getName());
    fragtrap.takeDamage(noName.getAttackDamage());
    fragtrap.beRepaired(10);
    fragtrap.getStatus();
    noName.getStatus();
    noName = fragtrap;
    noName.getStatus();
    noName.getStatus();
    noName.setName("New Name");
    noName.highFivesGuys();
    noName.getStatus();
    noName.highFivesGuys();
    noName.getStatus();
    return 0;
}