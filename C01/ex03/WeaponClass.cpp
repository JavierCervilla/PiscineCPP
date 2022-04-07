/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WeaponClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:04:16 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 13:48:39 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WeaponClass.hpp"

Weapon::Weapon() {
    std::cout << "Weapon created." << std::endl;
}

Weapon::Weapon(std::string type) {
    _type = type;
    std::cout << "Weapon of type (" << _type << ") created." << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Weapon of type (" << _type << ") destructed.Peace & Love." << std::endl;
}

const std::string Weapon::getType() {
    return (_type);
}

void Weapon::setType(std::string type) {
    _type = type;
}