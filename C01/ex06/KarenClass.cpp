/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KarenClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:51:45 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/12 11:51:40 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KarenClass.hpp"

Karen::Karen(void) {}
Karen::~Karen(void) {}

void Karen::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl<< std::endl;
}

void Karen::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money.\nYou don't put enough! If you did I would not have to ask for it!" << std::endl<< std::endl;
}

void Karen::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl<< std::endl;
}


void Karen::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*functions[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    int lvl = -1;
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            lvl = i;
        }
    }
    switch (lvl)
    {
        case 0:
            (this->*functions[0])();
        case 1:
            (this->*functions[1])();
        case 2:
            (this->*functions[2])();
        case 3:
            (this->*functions[3])();
            break;
        case -1:
            std::cout << "I am not sure how tired I am today..." << std::endl;
            break;
    }
}