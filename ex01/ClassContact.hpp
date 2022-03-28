/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:58:01 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/28 13:45:57 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact {
    private:
        int _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
    public:
        Contact(void);
        Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
        ~Contact(void);
        // GETTERS
        int getIndex(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        // SETTERS
        void setIndex(int index);
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickName(std::string nickName);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkestSecret);
        // UTILS
        void toString(void);
        std::string trimField(std::string field);
};

#endif