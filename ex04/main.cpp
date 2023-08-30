/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:29:45 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/30 12:20:55 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if (argc < 4) {
        std::cout << "input invalide" << std::endl;
    }

    if (argc == 4) {
        std::string data;
        std::ifstream file;
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        file.open(argv[1]);
        std::ofstream filere;
        filere.open("file.replace");
        while (getline(file, data, ' ')) {
            if (data == s1) {
                data = s2;
            }
            filere << data << " ";
        }
    }
}