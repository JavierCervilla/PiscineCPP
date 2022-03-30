/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:55:03 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/30 14:36:51 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "ClassContact.hpp"
#include "ClassPhook.hpp"

int checkCmd(std::string cmd, Phook *phook) {
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
        phook->getAllContacts();
        std::cout << "Enter the index of the contact you want to see: ";
        int index;
        std::cin >> index;
        if (std::cin.fail()) {
            std::cin.clear();
            return UNDEFINED;
        }
        std::cout << "ID:" << index << std::endl;
        if (index >= 0 && index < phook->getIndex()) {
            phook->getContactByIndex(index).print();
            return SEARCH;
        }
        return UNDEFINED;
    }
    return UNDEFINED;
}

int main (void)
{
    std::string cmd;
    Phook phook;

    std::cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
    while(true)
    {
        std::getline(std::cin, cmd);
        if (checkCmd(cmd, &phook) == EXIT)
            break;
        cmd.clear();
        std::cin.clear();
        std::cout << "Enter a command: ADD, SEARCH, EXIT:" << std::endl;
    }
    return (0);
}