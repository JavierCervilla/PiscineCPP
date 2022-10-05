/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:45:58 by javier            #+#    #+#             */
/*   Updated: 2022/10/05 12:55:07 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureaucratClass.hpp"

int main () {
    try {

    Bureaucrat *b1 = new Bureaucrat("Javier", 1);
    Bureaucrat *b2 = new Bureaucrat("Javier", 150);
    //Bureaucrat *b3 = new Bureaucrat("Javier", 0);
    //Bureaucrat *b4 = new Bureaucrat("Javier", 151);
    Bureaucrat *b5 = new Bureaucrat("Javier", 2);
    Bureaucrat *b6 = new Bureaucrat("Javier", 149);

    std::cout << *b1;
    std::cout << *b2;
    //std::cout << *b3;
    //std::cout << *b4;
    std::cout << *b5;
    std::cout << *b6;

    b1->incrementGrade();
    //b2->decrementGrade();
    //b3->incrementGrade();
    //b4->decrementGrade();
    b5->incrementGrade();
    b6->decrementGrade();

    std::cout << *b1;
    std::cout << *b2;
    //std::cout << *b3;
    //std::cout << *b4;
    std::cout << *b5;
    std::cout << *b6;

    delete b1;
    delete b2;
    //delete b3;
    //delete b4;
    delete b5;
    delete b6;
    return (0);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
};