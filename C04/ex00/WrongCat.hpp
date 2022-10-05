/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:23:18 by jcervill          #+#    #+#             */
/*   Updated: 2022/10/05 11:52:53 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_CLASS_HPP
# define WRONG_CAT_CLASS_HPP
# include <iostream>
# include "WrongAnimal.hpp"
# include "colors.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(WrongCat const &src);
        virtual ~WrongCat(void);
        WrongCat &operator=(WrongCat const &src);
};

#endif