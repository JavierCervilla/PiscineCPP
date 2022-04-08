/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KarenClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:51:45 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/08 11:25:16 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KarenClass.hpp"

Karen::Karen( void ) {
    std::cout << "Karen instance" << std::endl;
}
Karen::~Karen( void ) {
    std::cout << "Karen destruction" << std::endl;
}

void Karen::debug( void ) {
    std::cout << "Karen debugs." << std::endl;
}

void Karen::info( void ) {
    std::cout << "Karen informs." << std::endl;
}

void Karen::warning( void ) {
    std::cout << "Karen warns." << std::endl;
}

void Karen::error( void ) {
    std::cout << "Karen errors." << std::endl;
}

void Karen::complain( std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*fcts[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*fcts[i])();
        }
    }
}