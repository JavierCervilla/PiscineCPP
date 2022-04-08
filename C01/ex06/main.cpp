/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:11:45 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/08 11:39:38 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KarenClass.hpp"

int main ( int argc, char **argv ) {
    if (argc != 2) {
        std::cout << "Usage: ./KarenClass <level_to_listen>" << std::endl;
        return (1);
    }
    Karen karen;
    karen.complain(argv[1]);
    return 0;
}