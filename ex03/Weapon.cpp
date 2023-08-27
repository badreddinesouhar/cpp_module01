/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:35 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 07:24:28 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    
}

Weapon::~Weapon() {
    
}

const std::string Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string newType) {
    type = newType;
}