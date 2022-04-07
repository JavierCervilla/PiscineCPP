/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanAClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:19:26 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 14:10:07 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanAClass.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon) {
    std::cout << "HumanA (" << _name << ") with weapon (" << _weapon.getType() << ") created." << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA (" << _name << ") destructed." << std::endl;
}

std::string HumanA::getName() {
    return (_name);
}

void HumanA::setName(std::string name) {
    _name = name;
}

void HumanA::attack(void) {
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}