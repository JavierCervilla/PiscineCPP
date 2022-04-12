/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:28:40 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 12:39:41 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrapClass.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap") {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap [" << BLUE << this->_name << RESET << "] is born by default constructor." << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap [" << BLUE << this->_name << RESET << "] is born with name constructor." << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
    *this = src;
    std::cout << "ScavTrap [" << BLUE << this->_name << RESET << "] is born by clone constructor." << std::endl;
    return;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap [" << BLUE << this->_name << RESET << "] is destroyed." << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    //this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}

void ScavTrap::guardGate( void ) {
    if (this->_gateKeeper == true) {
        this->_gateKeeper = false;
        std::cout << "ScavTrap [" << BLUE << this->_name << RESET << "] is not guarding the gate anymore!" << std::endl;
    } else {
        this->_gateKeeper = true;
        std::cout << "ScavTrap [" << BLUE << this->_name << RESET << "] is now guarding the gate!" << std::endl;
    }
}

void ScavTrap::getStatus( void ) {
    std::cout << "ScavTrap [" << BLUE << this->_name << RESET << "] has:" << std::endl;
    std::cout << " - hit points:" << YELLOW << this->_hitPoints << RESET << std::endl; 
    std::cout << " - energy points:" << YELLOW << this->_energyPoints << RESET << std::endl;
    std::cout << " - attack damage:" << YELLOW << this->_attackDamage << RESET << std::endl;
    std::cout << " - gate keeper:" << YELLOW << this->_gateKeeper << RESET << std::endl;
}