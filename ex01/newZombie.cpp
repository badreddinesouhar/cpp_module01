/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:45:09 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 04:45:26 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ) {
    Zombie* zm;

    zm = new Zombie;
    if (!zm)
        return NULL;
    zm->setName(name);
    return zm;
}

Zombie* Zombie::zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}