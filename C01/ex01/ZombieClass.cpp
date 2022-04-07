/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:10:48 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 10:56:52 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ZombieClass.hpp"

Zombie::Zombie (void) {
    std::cout << "Zombie created." << std::endl;
}

Zombie::Zombie (std::string name) {
    tz::_name = name;
    std::cout << "Zombie ("  << name <<  ") created." << std::endl;
}

Zombie::~Zombie (void) {
    std::cout << "Zombie (" << tz::getName() <<  ") destroyed." << std::endl;
}

void Zombie::setName (std::string name) {
    tz::_name = name;
}

std::string Zombie::getName() {
    return (tz::_name);
}

void Zombie::announce( void ) {
    std::cout << tz::_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}