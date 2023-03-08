/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:07:07 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 15:26:47 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"
#include "WrongCatClass.hpp"

int main(void)
{
    size_t num_animals = 10;
    Animal *animal_arr[num_animals];

    Cat *a = new Cat();

    Cat *dst = new Cat();

    a->setType("🐈");

    *dst = *a;

	Cat cat = *a;

	std::cout << "CAT Brain: " << cat.getBrain() << std::endl;
	std::cout << "A Brain: " << a->getBrain() << std::endl;
	std::cout << "DST Brain: " << dst->getBrain() << std::endl;

    std::cout << dst->getType();
    std::cout << a->getType();
    dst->makeSound();

    delete a;
    delete dst;

    for (size_t i = 0; i < num_animals; i++)
    {
        if (i < num_animals / 2)
            animal_arr[i] = new Dog();
        else
            animal_arr[i] = new Cat();
    }

    for (size_t i = 0; i < num_animals; i++)
    {
        std::cout << "[" << i << "]"
                  << "\t" << animal_arr[i]->getType() << " ";
        animal_arr[i]->makeSound();
    }

    for (size_t i = 0; i < num_animals; i++)
        delete animal_arr[i];
};