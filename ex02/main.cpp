/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:59:23 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 05:16:43 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    
    std::string var = "HI THIS IS BRAIN";
    std::string* stringPTR = &var;
    std::string& stringREF = var;
    
    std::cout << "the adress of the string variable: " << &var << std::endl;
    std::cout << "the adress held by stringPTR: " << stringPTR << std::endl;
    std::cout << "the adress held by stringREF: " << &stringREF << std::endl;

    std::cout << "the value of the string: " << var << std::endl;
    std::cout << "the value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "the value pointed to by stringREF: " << stringREF << std::endl;
}
