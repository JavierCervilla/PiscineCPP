/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanBClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:19:26 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 14:18:49 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanBClass.hpp"

HumanB::HumanB(std::string name): _name(name) {
    std::cout << "HumanB (" << _name << ") created." << std::endl;
}

HumanB::~HumanB() {
    std::cout << "HumanB (" << _name << ") destructed." << std::endl;
}

std::string HumanB::getName() {
    return (_name);
}

void HumanB::setName(std::string name) {
    _name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}

void HumanB::attack(void) {
    if (!_weapon)
        return ;
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}