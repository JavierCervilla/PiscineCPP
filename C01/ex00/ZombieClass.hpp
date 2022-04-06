/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:07:01 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/06 18:54:21 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <iostream>
# include <string>

class Zombie {
    public:

        typedef Zombie tz;

        Zombie(std::string name);
        ~Zombie( void );
        std::string getName();
        void setName(std::string);
        void announce( void );

    private:

        std::string _name;
        Zombie(void);

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif