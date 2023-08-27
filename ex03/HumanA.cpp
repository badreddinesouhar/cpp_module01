/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 07:48:54 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {
    aWeapon.setType("gun");
}

HumanA::~HumanA() {
}

std::string HumanA::getName(){
    return name;
}

void HumanA::setName(std::string theName) {
    name = theName;
}
