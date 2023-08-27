/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:24 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 07:51:27 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
    
}

HumanB::~HumanB() {
}

std::string HumanB::getName(){
    return name;
}

void HumanB::setName(std::string theName) {
    name = theName;
}
