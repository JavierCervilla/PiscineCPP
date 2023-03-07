/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:07:07 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 12:33:49 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"
#include "WrongCatClass.hpp"

int main(void)
{
    size_t animal_count = 10;

    Animal *animal_arr[animal_count];

    Cat *a = new Cat();

    Cat *dst = new Cat();

    a->setType("🐈");

    dst->makeSound();

    for (size_t i = 0; i < animal_count; i++)
    {
        if (i < animal_count/2)
            animal_arr[i] = new Dog();
        else
            animal_arr[i] = new Cat();
    }

    for (size_t i = 0; i < animal_count; i++)
    {
        std::cout << "[" << i  << "]"
                  << "\t" << animal_arr[i]->getType() << " ";
        animal_arr[i]->makeSound();
    }

    for (size_t i = 0; i < animal_count; i++)
        delete animal_arr[i];
    delete dst;
    delete a;
};