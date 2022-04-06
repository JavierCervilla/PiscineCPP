/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:11:22 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/06 18:53:16 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieClass.hpp"

Zombie* newZombie( std::string name ) {
    return (new Zombie(name));
}