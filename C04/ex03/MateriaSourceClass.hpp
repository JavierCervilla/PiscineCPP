/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:51:42 by jcervill          #+#    #+#             */
/*   Updated: 2023/03/07 18:52:43 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_CLASS_HPP
#define MATERIA_SOURCE_CLASS_HPP
#include "IMateriaSource.hpp"
#include "AMateriaClass.hpp"
#include "colors.hpp"

class MateriaSource : virtual public IMateriaSource
{
    public:
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource(MateriaSource &src);

        MateriaSource &operator=(MateriaSource const &src);

        virtual void learnMateria(AMateria *);
        virtual AMateria *createMateria(std::string const &type);

    private:
        AMateria *_materias[4];
};

#endif