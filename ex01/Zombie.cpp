/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:45:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/10 11:44:59 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    
}

void Zombie::setName (std::string name) {
    _name = name;
}

void Zombie::announce() {
    std::cout << _name << " Braiiiinz..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed." << std::endl;
}
