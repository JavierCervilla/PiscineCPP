/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:55:03 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/29 12:34:51 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "ClassContact.hpp"
#include "ClassPhook.hpp"

int checkCmd(std::string cmd, Phook *phook) {
    if (cmd.compare("ADD") == 0) {
        phook->addContact();
        return ADD;
    }
    if (cmd.compare("EXIT") == 0)
        return EXIT;
    if (cmd.compare("SEARCH") == 0) {
        phook->getAllContacts();
        std::cout << "Enter the index of the contact you want to see: ";
        int index;
        std::cin >> index;
        if (index < 0 || index > 7 || index > phook->getIndex()) {
            std::cout << "Index out of range" << std::endl;
            return SEARCH;
        }
        Contact current = phook->getContactByIndex(index);
        current.print();
        return SEARCH;
    }
    return UNDEFINED;
}

int main (void)
{
    int exit = 0;
    std::string cmd;
    Phook phook;
    while(!exit)
    {
        std::cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;
        std::cin >> cmd;
        if (checkCmd(cmd, &phook) == EXIT)
            exit = 1;
    }
    return (0);
}