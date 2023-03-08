/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:07:07 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 15:21:48 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"
#include "WrongCatClass.hpp"


int main ( void ) {
    const Animal* meta = new Animal("Animal");
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    //const WrongCat* k =  new WrongCat();
    const WrongAnimal* k =  new WrongCat();
    
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << k->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete(meta);
    k->makeSound();
    delete(k);
    delete(i);
    delete(j);
};