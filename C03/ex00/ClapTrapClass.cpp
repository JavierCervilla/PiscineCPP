/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:47:21 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/10 13:47:21 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrapClass.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap [" << this->_name << "] is born by default!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap [" << this->_name << "] is born with name!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    *this = src;
    std::cout << "ClapTrap [" << this->_name << "] is born by clone!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap [" << this->_name << "] is destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}

std::string ClapTrap::getName(void) const {
    return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) const {
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const {
    return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
    return this->_attackDamage;
}

void ClapTrap::attack(std::string const &target) {
    std::cout << "ClapTrap [" << this->getName() << "] attacks [" << target << "], causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > this->_hitPoints) {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
    } else {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
}

