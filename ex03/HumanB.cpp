/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:24 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/09 15:11:49 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string theName) {
    _name = theName;
    _Weapon = NULL;
}

HumanB::~HumanB() {
    
}

std::string HumanB::getName() const {
    return _name;
}

void HumanB::setName(std::string _Name) {
    _name = _Name;
}

void HumanB::setWeapon(Weapon& newWeapon) {
    _Weapon = &newWeapon;
}

void HumanB::attack() {
    if (_Weapon == NULL) {
        std::cout << _name << "doesn't have any weapon to attack with" << std::endl;
    }
    else {   
        std::cout << _name << "attacks with there " << _Weapon->getType() << std::endl;
    }
}

