/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:58:51 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/09 17:56:35 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed {
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(Fixed const &fixed);
        ~Fixed(void);
        Fixed & operator=(Fixed const & fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif