/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrapClass.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:30:04 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 12:47:48 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrapClass.hpp"

DiamondTrap::DiamondTrap(void) {
    std::cout << CYAN << "DiamondTrap default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),  FragTrap(name), ScavTrap(name) {
    std::cout << "DiamondTrap ["  << CYAN << this->_name << RESET << "/" << RED << ClapTrap::getName() << RESET << "] is born by name constructor!" << std::endl;
    this->_name = name;
    this->_hitPoints = this->FragTrap::getHitPoints();
    this->_attackDamage = this->FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap ["  << CYAN << this->_name << RESET << "/" << RED << ClapTrap::getName() << RESET << "] is destroyed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src) {
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoints();
    //this->_energyPoints = src.getEnergyPoints();
    this->_attackDamage = src.getAttackDamage();
    return *this;
}

void DiamondTrap::attack(std::string const &target) {
    this->ScavTrap::attack(target);
}

std::string DiamondTrap::getName(void) const {
    return (this->_name);
}

void DiamondTrap::getStatus(void) {
    std::cout << "DiamondTrap [" << CYAN << this->_name << RESET << "] is alive!" << std::endl;
    std::cout << "HitPoints: " << this->getHitPoints() << std::endl;
    std::cout << "EnergyPoints: " << this->getEnergyPoints() << std::endl;
    std::cout << "AttackDamage: " << this->getAttackDamage() << std::endl;
}