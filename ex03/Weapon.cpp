/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:35 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 19:00:14 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType) {
    Weapon::setType(newType);
}

Weapon::~Weapon() {
    
}

const std::string Weapon::getType() const {
    return type;
}

void Weapon::setType(std::string theType) {
    type = theType;
}