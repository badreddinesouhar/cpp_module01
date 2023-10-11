/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:29:45 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/11 09:36:19 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string my_replace(std::string line, std::string search, std::string replace) {
    size_t pos = line.find(search);
    int len = search.length();

    while (pos != std::string::npos) {
        std::cout << pos << std::endl;
        std::cout << std::string::npos << std::endl; 
        line.erase(pos, len);
        line.insert(pos, replace);
        pos = line.find(search, pos + replace.length());
    }
    return (line);
}

int main(int argc, char **argv) {
    if (argc < 4 || argc > 4) {
        std::cout << "invalid arguments" << std::endl;
    }
    if (argc == 4) {
        std::ifstream file;
        std::ofstream fileReplace;
        std::string data;
        std::string s1;
        std::string s2;

        s1 = argv[2];
        s2 = argv[3];
        file.open(argv[1]);
        if (!file)
        {
            std::cout << "file doesn't exist" << std::endl;
            return(1);
        }
        if (file.peek() == std::ifstream::traits_type::eof()) {
            std::cout << "file is empty" << std::endl;
            return(1);
        }
        fileReplace.open(std::string(argv[1]) + ".replace");
        while (getline(file, data)) {
            while (data.find(s1) != std::string::npos) {
                data = my_replace(data, s1, s2);
            }
            fileReplace << data << std::endl;
        }
        file.close();
        fileReplace.close();
    }
}