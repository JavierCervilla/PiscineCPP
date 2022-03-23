/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:35:49 by jcervill          #+#    #+#             */
/*   Updated: 2022/03/23 13:57:03 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for(int i = 1; argv[i] != NULL; i++)
        for(int j = 0; argv[i][j] != 0; j++)
            std::cout << (char)toupper(argv[i][j]);
    std::cout << std::endl;
    return (0);
}