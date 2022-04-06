/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:55:03 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/06 12:41:04 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "ClassContact.hpp"
#include "ClassPhook.hpp"

int checkCmd(Phook *phook) {
    std::string cmd;
    std::getline(std::cin, cmd);
    std::string confirmation;
    if (cmd.compare("ADD") == 0) {
        phook->addContact();
        return ADD;
    }
    if (cmd.compare("EXIT") == 0) {
        std::cout << "your contacts will be lost forever. are you sure you want to exit? [y/N]:" << std::endl;
        std::cin >> confirmation;
        if (!confirmation.compare("y") || !confirmation.compare("yes") || !confirmation.compare("YES") || !confirmation.compare("Y"))
            return EXIT;
        return UNDEFINED;
    }
    if (cmd.compare("SEARCH") == 0) {
        if (phook->searchContact() == 0)
            return SEARCH;
    }
    return UNDEFINED;
}

int main (void)
{
    Phook phook;
    std::cout.clear();
    std::cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
    while(true)
    {
        
        if (checkCmd(&phook) == EXIT)
            break;
        std::cin.clear();
        std::cout << "Enter a command: ADD, SEARCH, EXIT:" << std::endl;
    }
    return (0);
}