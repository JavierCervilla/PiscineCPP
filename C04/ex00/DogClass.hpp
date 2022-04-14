/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:23:18 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 23:23:18 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <iostream>
# include "AnimalClass.hpp"
# include "colors.hpp"

class Dog : public Animal{
    protected:
        std::string _type;
    public:
        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);
        Dog &operator=(Dog const &src);
        virtual void makeSound( void );
};

#endif