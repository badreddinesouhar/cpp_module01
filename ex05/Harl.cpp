/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:27:20 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/03 14:50:52 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level) {
    
    void (Harl::*p1)() = &Harl::debug;
    void (Harl::*p2)() = &Harl::info;
    void (Harl::*p3)() = &Harl::warning;
    void (Harl::*p4)() = &Harl::error;
    
    void (Harl::*ptrComplain[4])() = {p1, p2, p3, p4};
    std::string levelStrings[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++) {
        if (level == levelStrings[i]) {
            (this->*ptrComplain[i])();
            break;
        }
    }
}
    