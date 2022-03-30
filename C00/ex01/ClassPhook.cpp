/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:10:42 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/30 14:09:53 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhook.hpp"

//CONSTRUCTOR

Phook::Phook(void) {
    std::cout << "[Phook]Default Constructor" << std::endl;
    this->_index = 0;
    return ;
}

Phook::~Phook(void) {
    std::cout << "[Phook]Default Destructor" << std::endl;
    return ;
}

//GETTERS

int Phook::getIndex(void) {
    return (this->_index);
}

Contact &Phook::getContactByIndex(int index) {
    return (this->_contacts[index]);
}

void Phook::getAllContacts(void) {
    for (int i = 0; i < this->_index; i++) {
       this->_contacts[i].toString();
    }
}

//SETTERS
void Phook::addContact(void) {
    std::cout << "New Contact:" << std::endl;
    _contacts[this->_index % 8].setIndex(this->_index % 8);
    std::cout << "Enter first name: " << std::endl;
    std::string firstName;
    std::cin >> firstName;
    _contacts[this->_index % 8].setFirstName(firstName);
    std::cout << "Enter last name: " << std::endl;
    std::string lastName;
    std::cin >> lastName;
    _contacts[this->_index % 8].setLastName(lastName);
    std::cout << "Enter nick name: " << std::endl;
    std::string nickName;
    std::cin >> nickName;
    _contacts[this->_index % 8].setNickName(nickName);
    std::cout << "Enter phone number: " << std::endl;
    std::string phoneNumber;
    std::cin >> phoneNumber;
    _contacts[this->_index % 8].setPhoneNumber(phoneNumber);
    std::cout << "Enter darkest secret: " << std::endl;
    std::string darkestSecret;
    std::cin >> darkestSecret;
    _contacts[this->_index % 8].setDarkestSecret(darkestSecret);
    _contacts[this->_index % 8].toString();
    this->_index++;
    std::cout << "Contact added: " << this->_index << std::endl;
}