/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:47 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 08:44:57 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	printStatus(const ClapTrap& ct)
{
	std::cout << "-----CLAPTRAP STATUS-----" << std::endl;
	std::cout << "Name: " << ct.getName() << std::endl;
	std::cout << "Hit points: " << ct.getHitPoints() << std::endl;
	std::cout << "Energy points: " << ct.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << ct.getAttackDamage() << std::endl;
	std::cout << "-------------------------" << std::endl;
	return ;
}

int main()
{
	ClapTrap test;
	ClapTrap first("First Claptrap");
	ClapTrap someone("Second Claptrap");
	ClapTrap cpy(first);

	printStatus(test);
	printStatus(first);
	test.attack("First Claptrap");
	first.takeDamage(test.getAttackDamage());
	printStatus(test);
	first.attack("abc");
	printStatus(first);
	cpy = first;
	printStatus(cpy);
	cpy.beRepaired(5);
	printStatus(first);
	printStatus(cpy);
	int i = 0;
	while (i <= 10)
	{
		first.attack("Second Claptrap");
		i++;
	}
	first.takeDamage(10);
	first.takeDamage(1);
	first.attack("Second Claptrap");
	return (0);
}