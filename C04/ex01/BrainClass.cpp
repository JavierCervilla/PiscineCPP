/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrainClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:12:35 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 12:51:10 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrainClass.hpp"

Brain::Brain( void ) {
    std::cout << "Brain void constructor called 💡" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = "💡";
    }
}

Brain &Brain::operator=(Brain const &src) {
    std::cout << "Brain copy operator called 💡" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = src._ideas[i];
    }
    return *this;
}

Brain::~Brain( void ) {
    std::cout << "Brain destructor called 💡" << std::endl;
}

Brain::Brain (Brain const &src) {
    std::cout << "Brain copy constructor called 💡" << std::endl;
    this->operator=(src);
}