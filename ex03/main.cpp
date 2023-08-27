/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:02:30 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 07:56:01 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// int main() {
//     HumanA A;
//     HumanB B;

//     A.setName("badr");
//     B.setName("anass");
//     B.bWeapon.setType("knife");

//     std::cout << A.getName()
//               << " attacks with their "
//               << A.aWeapon.getType() << std::endl;

//     std::cout << B.getName()
//               << " attacks with their "
//               << B.bWeapon.getType() << std::endl;
// }

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}