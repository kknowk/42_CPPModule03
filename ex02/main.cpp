/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:10:06 by khorike           #+#    #+#             */
/*   Updated: 2023/09/02 13:05:36 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("SC4V-TP");
	FragTrap frag("FR4G-TP");
	ClapTrap clap("CL4P-TP");

	scav.attack("enemy");
	frag.attack("enemy");
	clap.attack("enemy");

	scav.takeDamage(30);
	frag.takeDamage(40);
	scav.beRepaired(15);
	frag.beRepaired(20);
	scav.guardGate();
	frag.highFivesGuys();

	return 0;
}
