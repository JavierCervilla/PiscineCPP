/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:00:46 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 14:19:58 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WeaponClass.hpp"
#include "HumanAClass.hpp"
#include "HumanBClass.hpp"


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    {
        HumanB tom("Tom");
        tom.attack();
    }
}
