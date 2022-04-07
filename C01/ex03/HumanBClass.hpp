/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanBClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:01:13 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 14:17:38 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <iostream>
# include <string.h>
# include "WeaponClass.hpp"

class HumanB{
    typedef HumanB hb;

    private:
        std::string _name;
        Weapon* _weapon;
    public:
        ~HumanB(void);
        HumanB(std::string name);
        std::string getName(void);
        void setName(std::string name);
        void setWeapon(Weapon& weapon);
        void attack(void);
};

#endif