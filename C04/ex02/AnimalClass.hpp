/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:59:33 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 15:33:15 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>
# include "colors.hpp"
class Animal {
    public:
        std::string _type;
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &src);
        virtual ~Animal(void);
        Animal &operator=(Animal const &src);
        std::string getType( void ) const;
        void setType(std::string type);
        virtual void makeSound( void ) const = 0;
};

#endif