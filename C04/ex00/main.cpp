/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:07:07 by jcervill          #+#    #+#             */
/*   Updated: 2022/07/17 23:52:28 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"


int main ( void ) {
    const Animal* meta = new Animal("Animal");
    const Animal* j = new Dog();
    const Animal* k = new Cat();
    
    //const Animal* i = new Cat();
    //std::cout << j->getType() << " " << std::endl;
    //std::cout << i->getType() << " " << std::endl;
    
    k->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
};