/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanAClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:01:13 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 14:12:14 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include <iostream>
# include <string.h>
# include "WeaponClass.hpp"

class HumanA{
    typedef HumanA ha;

    private:
        std::string _name;
        Weapon& _weapon;
    public:
        ~HumanA(void);
        HumanA(std::string name, Weapon& weapon);
        std::string getName(void);
        void setName(std::string name);
        void attack(void);
};

#endif