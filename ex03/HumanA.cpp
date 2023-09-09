/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/08 21:52:23 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name) , _weapon(weapon) {
    
}

HumanA::~HumanA() {
    
}

void HumanA::attack() {
    std::cout << _name << "attacks with there " << _weapon.getType() << std::endl;
}