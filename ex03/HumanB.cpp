/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:24 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 19:16:42 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(std::string theName) {
//     HumanB::setName(theName);
// }

HumanB::HumanB(std::string theName) : bWeapon("default_weapon_type") {
    HumanB::setName(theName);
}

HumanB::~HumanB() {
}

std::string HumanB::getName(){
    return name;
}

void HumanB::setName(std::string _Name) {
    name = _Name;
}

void HumanB::attack() {
        std::cout << getName()
              << " attacks with their "
              << HumanB::bWeapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon newWeapon) {
    bWeapon = newWeapon;    
}