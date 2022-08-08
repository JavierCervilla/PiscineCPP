/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrainClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:51:17 by jcervill          #+#    #+#             */
/*   Updated: 2022/08/08 15:56:39 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <iostream>
# include "colors.hpp"



class Brain {
    protected:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(Brain const &src);
        virtual ~Brain(void);
        Brain &operator=(Brain const &src);
};

#endif