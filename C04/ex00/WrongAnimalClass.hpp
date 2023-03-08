/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalClass.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:59:33 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/08 15:16:12 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_HPP
# define WRONG_ANIMAL_CLASS_HPP
# include <iostream>
# include "colors.hpp"
class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &src);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &src);
        std::string getType( void ) const;
        void setType(std::string type);
        void makeSound( void ) const;
};

#endif