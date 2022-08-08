/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:23:18 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 16:05:17 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <iostream>
# include "AnimalClass.hpp"
# include "BrainClass.hpp"
# include "colors.hpp"

class Dog : public Animal{
    private:
        Brain *_brain;

    public:
        Dog(void);
        Dog(Dog const &src);
        Dog(Brain const &src);
        virtual ~Dog(void);
        Dog &operator=(Dog const &src);
        virtual void makeSound( void ) const;
        Brain *getBrain() const;
        void setBrain (Brain const &brain);
};

#endif