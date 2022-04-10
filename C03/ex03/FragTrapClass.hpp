/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrapClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:04:19 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/11 01:04:19 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_HPP
# define FRAG_TRAP_CLASS_HPP
# include "ClapTrapClass.hpp"

class FragTrap: public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);
        FragTrap &operator=(FragTrap const &src);

        void highFivesGuys( void );
        void getStatus( void );
};

#endif