/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:10:06 by khorike           #+#    #+#             */
/*   Updated: 2023/09/02 12:41:35 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("SC4V-TP");

	scav.attack("enemy");
	scav.takeDamage(30);
	scav.beRepaired(15);
	scav.guardGate();

	return 0;
}
