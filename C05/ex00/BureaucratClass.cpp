/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureaucratClass.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:40:11 by javier            #+#    #+#             */
/*   Updated: 2022/10/05 12:53:36 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureaucratClass.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat constructor called with name: "  << this->getName() << " and grade: " << this->getGrade() << std::endl;
};

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    *this = src;
};

Bureaucrat::~Bureaucrat(void) {};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
    this->_grade = src.getGrade();
    return (*this);
}

std::string Bureaucrat::getName( void ) const {
    return (this->_name);
}

int Bureaucrat::getGrade( void ) const {
    return (this->_grade);
}

void Bureaucrat::incrementGrade( void ) {
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade( void ) {
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return (o);
}