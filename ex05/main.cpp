/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:27:12 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/03 14:51:29 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl; 
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
}