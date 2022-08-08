/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:23:18 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 16:08:36 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include <iostream>
# include "AnimalClass.hpp"
# include "BrainClass.hpp"
# include "colors.hpp"

class Cat : public Animal{
    private:
        Brain *_brain;

    public:
        Cat(void);
        Cat(Cat const &src);
        Cat(Brain const &src);
        virtual ~Cat(void);
        Cat &operator=(Cat const &src);
        virtual void makeSound( void ) const;
        Brain *getBrain() const;
        void setBrain (Brain const &brain);
};

#endif