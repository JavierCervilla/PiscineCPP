/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:23:18 by jcervill          #+#    #+#             */
/*   Updated: 2022/07/17 23:25:39 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include <iostream>
# include "AnimalClass.hpp"
# include "colors.hpp"

class Cat : public Animal{
    public:
        Cat(void);
        Cat(Cat const &src);
        virtual ~Cat(void);
        Cat &operator=(Cat const &src);
        virtual void makeSound( void ) const;
};

#endif