/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:26:28 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/11 11:13:34 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie zm("ooh");
    zm.announce();
    Zombie tata;
    tata.setname("badr");
    tata.announce();
    Zombie* tt = NULL;
    tt = newZombie("ff");
    tt->announce();
    randomChump("anass");
}