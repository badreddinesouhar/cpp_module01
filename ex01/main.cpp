/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:45:05 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/10 16:54:14 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5;
    
    Zombie inst;
    Zombie* horde = inst.zombieHorde(N, "negga");
    
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }
    delete[] horde;
}