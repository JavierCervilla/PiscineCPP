/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:45:16 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/06 19:07:31 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

Zombie staticZombie("Static Zombie");

int main () {
    Zombie zombieInMain("Zombie in Main");
    randomChump("Dynamic Zombie");
    return (0);
}