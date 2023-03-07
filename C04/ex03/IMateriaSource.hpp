/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:42:43 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 18:52:13 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
# include "AMateriaClass.hpp"


class IMateriaSource
{
    public:
        virtual ~IMateriaSource(void) {}
        virtual void learnMateria(AMateria *) = 0;
        virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif