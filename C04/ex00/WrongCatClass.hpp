/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:23:18 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 15:16:30 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_CLASS_HPP
# define WRONG_CAT_CLASS_HPP
# include <iostream>
# include "WrongAnimalClass.hpp"
# include "colors.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(WrongCat const &src);
        virtual ~WrongCat(void);
        WrongCat &operator=(WrongCat const &src);
        void makeSound( void ) const;
};

#endif