/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:11:45 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/08 11:39:03 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KarenClass.hpp"

int main ( void ) {
    Karen karen;
    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    karen.complain("other");
    return 0;
}