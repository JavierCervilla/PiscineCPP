/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:53:49 by jcervill          #+#    #+#             */
/*   Updated: 2022/04/07 16:53:49 by jcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int checkArgsAndReplace(int argc, char **argv) {
    std::ifstream inFile;
    std::ofstream outFile;

    if (argc != 4) {
        std::cout << "Usage: ./replace <filename> <string_to_search> <string_to_replace>" << std::endl;
        return (0);
    }
    std::string filename = argv[1];
    inFile.open(argv[1]);
    if (!inFile.is_open()) {
        std::cout << "Error: file not found." << std::endl;
        return (0);
    }
    outFile.open(filename + ".replace");
    if (!outFile.is_open()) {
        std::cout << "Error: output file can't be created." << std::endl;
        return (0);
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (!s1.length() || !s2.length()) {
        std::cout << "Error: strings can't be empty strings." << std::endl;
        return (0);
    }
    std::string line;
    std::string replace;

    while(std::getline(inFile, line)) {
        for (size_t i = 0; i < line.length(); i++) {
            replace = &line[i];
            replace = replace.substr(0, s1.length());
            if (!replace.find(s1)) {
                outFile << s2;
                i += s1.length() - 1;
            } else {
                outFile << line[i];
            }
        }
        if (!inFile.eof())
            outFile << '\n';
    }
    return (1);
}

int main ( int argc, char **argv ) {
    if (!checkArgsAndReplace(argc, argv))
        return (1);
    return (0);
}