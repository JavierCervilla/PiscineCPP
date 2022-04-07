/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:07:01 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 10:56:19 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <iostream>
# include <string>

class Zombie {
    public:
        typedef Zombie tz;

        Zombie(void);
        Zombie(std::string name);
        ~Zombie( void );
        std::string getName();
        void setName(std::string);
        void announce( void );

    private:

        std::string _name;

};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif