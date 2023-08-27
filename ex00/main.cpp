/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:45:05 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 04:39:12 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    Zombie Zmb("Foo");
    Zmb.announce();

    Zombie instantZm;
    Zombie* newZomb =  instantZm.newZombie("badr");
    newZomb->announce();

    Zombie chmp;
    chmp.randomChump("hacker");
    
    delete newZomb;
}
