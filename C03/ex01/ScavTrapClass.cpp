/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:28:40 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/10 14:28:40 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrapClass.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap"), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
    std::cout << "ScavTrap [" << this->_name << "] is born by default constructor." << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
    std::cout << "ScavTrap [" << this->_name << "] is born with name constructor." << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
    *this = src;
    std::cout << "ScavTrap [" << this->_name << "] is born by clone constructor." << std::endl;
    return;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap [" << this->_name << "] is destroyed." << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}

void ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap [" << this->_name << "] is guarding The Gate in Gate Keeper Mode!" << std::endl;
    return;
}