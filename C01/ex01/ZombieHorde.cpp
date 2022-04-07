/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:11:22 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 11:01:19 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        std::string newName = name + "_" + std::to_string(i);
        horde[i].setName(newName);
    }
	return horde;
}