/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KarenClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:51:45 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/08 11:56:15 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KarenClass.hpp"

Karen::Karen(void)
{
    std::cout << "Karen instance" << std::endl;
}
Karen::~Karen(void)
{
    std::cout << "Karen destruction" << std::endl;
}

void Karen::debug(void)
{
    std::cout << "Karen debugs." << std::endl;
}

void Karen::info(void)
{
    std::cout << "Karen informs." << std::endl;
}

void Karen::warning(void)
{
    std::cout << "Karen warns." << std::endl;
}

void Karen::error(void)
{
    std::cout << "Karen errors." << std::endl;
}

void Karen::complain(std::string level)
{
    std::cout << "[ " << level << " ]" << std::endl;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*fcts[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    int lvl = -1;
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            lvl = i;
    }
    switch (lvl)
    {
    case 0:
        for (int i = 0; i < 4; i++)
        {
            (this->*fcts[i])();
        }
        break;
    case 1:
        for (int i = 1; i < 4; i++)
        {
            (this->*fcts[i])();
        }
        break;
    case 2:
        for (int i = 2; i < 4; i++)
        {
            (this->*fcts[i])();
        }
        break;
    case 3:
        for (int i = 3; i < 4; i++)
        {
            (this->*fcts[i])();
        }
        break;
    default:
        std::cout << "Probably complaining about insignificant problems" << std::endl;
        break;
    }
}