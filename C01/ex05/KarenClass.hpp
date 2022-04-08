/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KarenClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:51:49 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/08 10:55:00 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_CLASS_HPP
# define KAREN_CLASS_HPP
# include <iostream>
# include <string>

class Karen {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Karen( void );
        ~Karen( void );
        void complain(std::string level);
};

#endif