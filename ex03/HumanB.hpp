/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:50:45 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/09 15:04:22 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon* _Weapon;
    public:
        HumanB(std::string theName);
        ~HumanB();
        
        
        std::string getName() const;
        void setName(std::string _Name);
        void attack();
        void setWeapon(Weapon& newWeapon);
};

#endif
