/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:45:16 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/06 19:22:38 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

int main () {
	Zombie z("Jaimito");
	Zombie *ptr = newZombie("Pepito");

	z.announce();
	ptr->announce();

	randomChump("Marianito");
	delete ptr;
	return (0);
}