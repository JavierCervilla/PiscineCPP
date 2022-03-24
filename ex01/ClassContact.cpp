/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:57:52 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/24 19:44:21 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClassContact.hpp"

Contact::Contact(void) {
    std::cout << "Default Constructor" << std::endl;
    return ;
}

Contact::~Contact(void) {
    std::cout << "Default Destructor" << std::endl;
    return ;
}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber) {
    std::cout << "Full Constructor" << std::endl;
    this->_index = index;
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_nickName = nickName;
    this->_phoneNumber = phoneNumber;
    return  ;
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