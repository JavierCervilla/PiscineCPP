/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:07:07 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 16:15:06 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"
#include "WrongCatClass.hpp"

int main(void)
{
    Animal *animal_arr[6];

    Cat *a = new Cat();

    Cat *dst = new Cat();

    a->setType("🐈");

    dst->makeSound();

    for (size_t i = 0; i < 6; i++)
    {
        if (i < 3)
            animal_arr[i] = new Dog();
        else
            animal_arr[i] = new Cat();
    }

    for (size_t i = 0; i < 6; i++)
    {
        std::cout << "[" << i + 1 << "]"
                  << "\t" << animal_arr[i]->getType() << " ";
        animal_arr[i]->makeSound();
    }

    for (size_t i = 0; i < 6; i++)
        delete animal_arr[i];
    delete dst;
};