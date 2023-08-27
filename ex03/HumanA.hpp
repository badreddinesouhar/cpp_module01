/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:28:01 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 19:14:13 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
    public:
        // HumanA(std::string theName, Weapon aWeapon) ;
        HumanA(std::string theName, Weapon aWeapon);
        ~HumanA();
        
        Weapon aWeapon;
        std::string getName();
        void setName(std::string theName);
        void attack();
};

#endif
