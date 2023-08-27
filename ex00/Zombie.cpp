/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:45:15 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 04:09:43 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    // this->_name = "default";
}

Zombie::Zombie(const std::string& name)  {
    this->_name = name;
}

void Zombie::setName(std::string s){
    _name = s;  
}

std::string& Zombie::getName(void) {
    return this->_name;
}

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " destroyed." << std::endl;
}