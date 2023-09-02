/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:10:06 by khorike           #+#    #+#             */
/*   Updated: 2023/09/02 12:29:11 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("CLTP");

	for (int i = 0; i < 5; i++)
	{
		claptrap.attack("enemy");
	}

	claptrap.takeDamage(9);

	claptrap.attack("enemy");
	claptrap.beRepaired(2);

	for (int i = 0; i < 5; i++)
	{
		claptrap.attack("enemy");
		claptrap.beRepaired(2);
	}

	claptrap.attack("enemy");
	claptrap.beRepaired(2);

	return 0;
}
