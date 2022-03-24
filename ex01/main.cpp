/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:55:03 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/24 19:47:09 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

int main (void)
{
    Contact empty;
    std::cout << empty.getFirstName() << " " << empty.getLastName() << " " << empty.getNickName() << " " << empty.getIndex() << " " << empty.getPhoneNumber() << std::endl;
    empty.setIndex(0);
    empty.setFirstName("firstName");
    empty.setLastName("lastName");
    empty.setNickName("nickName");
    empty.setPhoneNumber("123456789");
    std::cout << empty.getFirstName() << " " << empty.getLastName() << " " << empty.getNickName() << " " << empty.getIndex() << " " << empty.getPhoneNumber() << std::endl;
    Contact fullContact(1, "firstName", "lastName", "nickName", "123456789" );
    std::cout << fullContact.getFirstName() << " " << fullContact.getLastName() << " " << fullContact.getNickName() << " " << fullContact.getIndex() << " " << fullContact.getPhoneNumber() << std::endl;
    return (0);
}