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

DiamondTrap::DiamondTrap(void): ClapTrap(std::string("DiamondTrap") + "_clap_name") {
    this->_name = "DiamondTrap";
    std::cout << "DiamondTrap ["  << CYAN << this->_name << RESET << "/" << RED << ClapTrap::getName() << RESET << "] is born by default constructor!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),  FragTrap(name), ScavTrap(name) {
    this->_name = name;
    this->_hitPoints = this->FragTrap::getHitPoints();
    this->_attackDamage = this->FragTrap::getAttackDamage();
    std::cout << "DiamondTrap ["  << CYAN << this->_name << RESET << "/" << RED << ClapTrap::getName() << RESET << "] is born by name constructor!" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap ["  << CYAN << this->_name << RESET << "/" << RED << ClapTrap::getName() << RESET << "] is destroyed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src) {
    this->_name = src._name;
    this->ClapTrap::setName(src._name + "_clap_name");
    this->_hitPoints = src.getHitPoints();
    //this->_energyPoints = src.getEnergyPoints();
    this->_attackDamage = src.getAttackDamage();
    return *this;
}

void DiamondTrap::attack(std::string const &target) {
    this->ScavTrap::attack(target);
}

void DiamondTrap::setName(std::string name) {
    this->_name = name;
    this->ClapTrap::setName(name + "_clap_name");
}

std::string DiamondTrap::getName(void) const {
    return (this->_name);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "I am a DiamondTrap named " << CYAN << this->_name << RESET << " and ClapTrap Named " << RED << this->ClapTrap::getName() << RESET << std::endl;
}

void DiamondTrap::getStatus(void) {
    std::cout << "DiamondTrap [" << CYAN << this->_name << RESET << "/" <<  RED << this->ClapTrap::_name << RESET << "] info:" << std::endl;
    std::cout << " - HitPoints: " << this->getHitPoints() << std::endl;
    std::cout << " - EnergyPoints: " << this->getEnergyPoints() << std::endl;
    std::cout << " - AttackDamage: " << this->getAttackDamage() << std::endl;
}

