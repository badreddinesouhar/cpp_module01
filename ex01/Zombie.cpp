/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:45:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/10 16:56:18 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    
}

void Zombie::setName (std::string name) {
    _name = name;
}

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << _name << " is destroyed." << std::endl;
}
