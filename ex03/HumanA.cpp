/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 19:12:33 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(std::string theName, Weapon aWeapon) {
//     // aWeapon.setType(theName);
//     HumanA::setName(theName);
//     (void)aWeapon;
//     // HumanA::aWeapon
// }

HumanA::HumanA(std::string theName, Weapon aWeapon) : aWeapon(aWeapon) {
    // Initialize other member variables if needed
    name = theName;
}


// HumanA::HumanA(std::string theName, HumanA::Weapon aWeapon) {
//     // You need to assign the parameter 'aWeapon' to the member variable 'aWeapon'
//     HumanA::aWeapon = aWeapon;
    
//     // You probably want to set the name as well
//     HumanA::setName(theName);
//     // If 'aWeapon' has a 'setType' method, you can set the type here
//     // aWeapon.setType("some_type");
// }


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
              << HumanA::aWeapon.getType() << std::endl;
}
