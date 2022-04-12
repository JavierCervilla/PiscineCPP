/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrapClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:06:29 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 01:06:29 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrapClass.hpp"

FragTrap::FragTrap( void ) : ClapTrap("FragTrap") {
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap ["  << GREEN << this->_name << RESET << "] is born by default constructor!" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap ["  << GREEN << this->_name << RESET << "] is born by name constructor!" << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ) {
    *this = src;
    std::cout << "FragTrap ["  << GREEN << this->_name << RESET << "] is born by clone constructor!" << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap ["  << GREEN << this->_name << RESET << "] is destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const &src ) {
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_attackDamage = src.getAttackDamage();
    return *this;
}

void FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap ["  << GREEN << this->_name << RESET << "]" << BOLD << CYAN << " high fives guys!" << RESET << std::endl;
}

void FragTrap::getStatus( void ) {
    std::cout << "FragTrap [" << GREEN << this->_name << RESET << "] has:" << std::endl;
    std::cout << " - hit points:" << YELLOW << this->_hitPoints << RESET  << std::endl; 
    std::cout << " - energy points:" << YELLOW << this->_energyPoints << RESET << std::endl;
    std::cout << " - attack damage:" << YELLOW << this->_attackDamage << RESET << std::endl;
}