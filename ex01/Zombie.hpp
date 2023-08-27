/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:45:18 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 04:40:14 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

private:
    std::string _name;
public:
    Zombie();
    Zombie(const std::string& name);
    ~Zombie();

    Zombie* newZombie( std::string name );
    Zombie* zombieHorde( int N, std::string name );

    void setName(std::string s);
    void announce( void );
    std::string& getName(void);
    void randomChump( std::string name );
};

#endif
