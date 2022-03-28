/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhook.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:58:01 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/28 13:09:08 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHOOK_HPP
# define CLASSPHOOK_HPP
# include <iostream>
# include <string>
# include "ClassContact.hpp"

class Phook {
    private: 
        int _index;
        Contact _contacts[8];
    public:
        Phook(void);
        ~Phook(void);
        // GETTERS
        Contact getContactByIndex(int index);
        void getAllContacts(void);
        // SETTERS
        void addContact(void);
};

#endif