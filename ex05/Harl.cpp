/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:27:20 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/30 14:55:16 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level) {
    Harl harl;
    void (Harl::* functionPointers[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::map<std::string, int> levelToIndex;
    levelToIndex["debug"] = 0;
    levelToIndex["info"] = 1;
    levelToIndex["warning"] = 2;
    levelToIndex["error"] = 3;

    std::map<std::string, int>::iterator it = levelToIndex.find(level);
    while (it != levelToIndex.end()) {
        int index = it->second;
        (harl.*functionPointers[index])();
        break;
    }
}

