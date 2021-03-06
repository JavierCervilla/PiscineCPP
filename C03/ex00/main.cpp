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
    claptrap.getStatus();
    claptrap.beRepaired(10);
    claptrap.getStatus();
    noName.getStatus();
    noName = claptrap;
    claptrap.getStatus();
    noName.getStatus();
    return 0;
}