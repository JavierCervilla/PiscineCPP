/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrapClass.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:30:04 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 01:30:04 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrapClass.hpp"

DiamondTrap::DiamondTrap(void) {
    std::cout << CYAN << "DiamondTrap default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap ["  << CYAN << this->_name << RESET << "/" << RED << Claptrap::getName() << RESET << "] is born by name constructor!" << std::endl;
    this->_hitPoints = this->FragTrap::getHitPoints();
    this->_energyPoints = this->Scavtrap::getEnergyPoints();
    this->_attackDamage = this->FragTrap::getAttackDamage();
}

void DiamondTrap::attack(std::string const &target) {
    this->ScavTrap::attack(target);
}

void DiamondTrap::getName(void) const {
    return (this->_name);
}