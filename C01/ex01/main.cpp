/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:45:16 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 12:03:23 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

int main () {
	int N = 3;
	Zombie *horde = zombieHorde( N,  "alaguila" );

	for(int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}