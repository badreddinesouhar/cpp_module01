/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/28 22:26:21 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::newWeapon(std::string type) {
    aWeapon = new Weapon(type);
    if (!aWeapon) {
        return;
    }
}

HumanA::HumanA(std::string theName, Weapon* aWeapon) : aWeapon(aWeapon) {
    setName(theName);
}

HumanA::~HumanA() {
}

std::string HumanA::getName(){
    return name;
}

void HumanA::setName(std::string theName) {
    name = theName;
}

void HumanA::attack() {
        std::cout << getName()
              << " attacks with their "
              << HumanA::aWeapon->getType() << std::endl;
}
