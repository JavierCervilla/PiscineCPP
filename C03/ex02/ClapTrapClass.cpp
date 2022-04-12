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
    std::cout << "ClapTrap ["  << RED << this->_name << RESET << "] is born by default constructor!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap ["  << RED << this->_name << RESET << "] is born with name constructor!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    *this = src;
    std::cout << "ClapTrap ["  << RED << this->_name << RESET << "] is born by clone!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap ["  << RED << this->_name << RESET << "] is destroyed!" << std::endl;
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

void ClapTrap::setName(std::string name) {
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
    this->_attackDamage = attackDamage;
}

void ClapTrap::attack(std::string const &target) {
    if (this->_energyPoints > 0) {
        std::cout << "ClapTrap [" << RED << this->getName() << RESET << "] attacks [" << RED << target << RESET << "], causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    } else {
        std::cout << "ClapTrap [" << RED << this->getName() << RESET << "] is out of energy!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints > 0) {
        this->_energyPoints--;
        this->_hitPoints += amount;
        std::cout << "ClapTrap " << RED << this->getName() << RESET " is repaired by " << amount << " points!" << std::endl;
    } else {
        std::cout << "ClapTrap [" << RED << this->getName() << RESET << "] is out of energy!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > this->_hitPoints) {
        this->_hitPoints = 0;
        std::cout << "ClapTrap [" << RED << this->_name << RESET << "] is dead!" << std::endl;
    } else {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap [" << RED << this->_name << RESET << "] takes " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::getStatus( void ) {
    std::cout << "ClapTrap [" << RED << this->_name << RESET << "] has:" << std::endl;
    std::cout << " - hit points:" << YELLOW << this->_hitPoints << RESET  << std::endl; 
    std::cout << " - energy points:" << YELLOW << this->_energyPoints << RESET << std::endl;
    std::cout << " - attack damage:" << YELLOW << this->_attackDamage << RESET << std::endl;
}
