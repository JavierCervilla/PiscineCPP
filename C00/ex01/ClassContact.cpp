/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:57:52 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/28 13:49:09 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClassContact.hpp"

Contact::Contact(void) {
    std::cout << "[Contact]Default Constructor" << std::endl;
    return ;
}

Contact::~Contact(void) {
    std::cout << "[Contact]Default Destructor" << std::endl;
    return ;
}

Contact::Contact(
        int index,
        std::string firstName,
        std::string lastName,
        std::string nickName,
        std::string phoneNumber,
        std::string darkestSecret
    ) {
    std::cout << "Full Constructor" << std::endl;
    this->_index = index;
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_nickName = nickName;
    this->_phoneNumber = phoneNumber;
    this->_darkestSecret = darkestSecret;
    return ;
}

// GETTTERS

std::string Contact::getFirstName(void) {
    return (this->_firstName);
}

int Contact::getIndex(void) {
    return (this->_index);
}

std::string Contact::getLastName(void) {
    return (this->_lastName);
}

std::string Contact::getNickName(void) {
    return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) {
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) {
    return (this->_darkestSecret);
}

//SETTERS

void Contact::setIndex(int index) {
    this->_index = index;
}

void Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
    this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

// UTILS

std::string Contact::trimField(std::string field) {
    if (field.length() >= 10)
    {
        std::string result = field.substr(0, 9);
        return result.append(".");
    }
    return field;
}

void Contact::toString(void) {
    std::cout << std::setfill (' ') << std::setw (10) << this->_index << "|";
    std::cout << std::setfill (' ') << std::setw (10) << trimField(this->_firstName) << "|";
    std::cout << std::setfill (' ') << std::setw (10) << trimField(this->_lastName) << "|";
    std::cout << std::setfill (' ') << std::setw (10) << trimField(this->_nickName) << "|";
    std::cout << std::setfill (' ') << std::setw (10) << trimField(this->_phoneNumber) << "|";
    std::cout << std::setfill (' ') << std::setw (10)  << trimField(this->_darkestSecret) << std::endl;
}

void Contact::print(void) {
    std::cout  << "Index: " << this->_index  << std::endl;
    std::cout  << "First name: " << this->_firstName << std::endl;
    std::cout  << "Last name: " << this->_lastName << std::endl;
    std::cout  << "Nickname: " << this->_nickName << std::endl;
    std::cout  << "Phone: " << this->_phoneNumber << std::endl;
    std::cout  << "Darkest secret: " << this->_darkestSecret << std::endl;
}