/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:53:20 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/06 18:56:04 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

void randomChump( std::string name ) {
    Zombie *z = newZombie(name);
    z->announce();
}