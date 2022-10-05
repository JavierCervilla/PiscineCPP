/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureaucratClass.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:59:33 by jcervill          #+#    #+#             */
/*   Updated: 2022/10/05 12:47:10 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
# include <iostream>
# include "colors.hpp"
class Bureaucrat {
    protected:
        std::string const _name;
        int _grade; // 1 is the highest grade, 150 is the lowest
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        virtual ~Bureaucrat(void);
        Bureaucrat &operator=(Bureaucrat const &src);
        std::string getName( void ) const;
        int getGrade( void ) const;
        
        
        void incrementGrade( void );
        void decrementGrade( void );


        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return (RED "Grade too high" RESET);
                }
        };


        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return (RED "Grade too low" RESET);
                }
        };
};
std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif