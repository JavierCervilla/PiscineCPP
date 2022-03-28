/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:55:03 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/28 14:05:20 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "ClassContact.hpp"
#include "ClassPhook.hpp"

int checkCmd(std::string cmd) {
    if (std::string::strcmp(cmd, 'ADD') == 0)
        return 1;
}

int main (void)
{
    int exit = 0;
    std::string cmd;
    Phook phook;
    while(!exit)
    {
        std::cin >> cmd;
        checkCmd(cmd);
    }
    phook.addContact();
    return (0);
}