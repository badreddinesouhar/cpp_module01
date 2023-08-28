/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:28:01 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/28 22:26:27 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon* aWeapon;
    public:
        HumanA(std::string theName, Weapon* aWeapon);
        ~HumanA();
        
        std::string getName();
        void newWeapon(std::string type);
        void setName(std::string theName);
        void attack();
};

#endif
