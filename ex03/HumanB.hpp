/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:50:45 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 07:51:15 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
    public:
        HumanB();
        ~HumanB();
        
        Weapon bWeapon;
        
        std::string getName();
        void setName(std::string theName);
};

#endif
