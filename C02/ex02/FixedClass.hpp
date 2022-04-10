/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:58:51 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/09 18:45:28 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>
# include <stdbool.h>

class Fixed {
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(const int number);
        Fixed(const float number);
        //Canonical
        Fixed(Fixed const &fixed);
        ~Fixed(void);
        Fixed & operator=(Fixed const & fixed);
        //Operators
        // - comparison
        bool  operator==(Fixed const &fixed) const;
        bool  operator!=(Fixed const &fixed) const;
        bool  operator>=(Fixed const &fixed) const;
        bool  operator<=(Fixed const &fixed) const;
        bool  operator>(Fixed const &fixed) const;
        bool  operator<(Fixed const &fixed) const;
        // - arithmetic
        Fixed operator+(Fixed const &fixed) const;
        Fixed operator-(Fixed const &fixed) const;
        Fixed operator*(Fixed const &fixed) const;
        Fixed operator/(Fixed const &fixed) const;
        Fixed operator++( void );
        Fixed operator++( int i );
        Fixed operator--( void );
        Fixed operator--( int i );
        // -- min/max
        static Fixed const &min( Fixed const &a, Fixed const &b );
        static Fixed const &max( Fixed const &a, Fixed const &b );
        static Fixed &min( Fixed &a, Fixed &b );
        static Fixed &max( Fixed &a, Fixed &b );
        //Member functions
        // - getters/setters
        int getRawBits(void) const;
        void setRawBits(int const raw);
        // - auxiliary
        float toFloat(void) const;
        int toInt(void) const;
};
std::ostream& operator << ( std::ostream &out, const Fixed &fixed );
Fixed	const &min ( Fixed const &a, Fixed const &b );
Fixed	const &max ( Fixed const &a, Fixed const &b );

Fixed	&min ( Fixed &a, Fixed &b );
Fixed	&max ( Fixed &a, Fixed &b );
#endif