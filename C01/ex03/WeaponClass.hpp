/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WeaponClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:01:13 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 13:48:33 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string.h>

class Weapon{
    typedef Weapon wp;

    private:
        std::string _type;
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);
        const std::string getType(void);
        void setType(std::string type);
};

#endif