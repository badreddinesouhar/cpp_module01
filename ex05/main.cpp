/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:27:12 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/30 14:55:50 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl; 
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
}