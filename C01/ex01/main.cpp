/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:45:16 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/12 11:29:47 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

int main () {
	int N = 7;
	Zombie *horde = zombieHorde( N,  "zombie" );

	for(int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}