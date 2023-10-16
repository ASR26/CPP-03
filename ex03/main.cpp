/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:47 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 12:32:28 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	printStatusClap(const ClapTrap& ct)
{
	std::cout << "-----CLAPTRAP STATUS-----" << std::endl;
	std::cout << "Name: " << ct.getName() << std::endl;
	std::cout << "Hit points: " << ct.getHitPoints() << std::endl;
	std::cout << "Energy points: " << ct.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << ct.getAttackDamage() << std::endl;
	std::cout << "-------------------------" << std::endl;
	return ;
}

void	printStatusFrag(const FragTrap& ct)
{
	std::cout << "-----FRAGTRAP STATUS-----" << std::endl;
	std::cout << "Name: " << ct.getName() << std::endl;
	std::cout << "Hit points: " << ct.getHitPoints() << std::endl;
	std::cout << "Energy points: " << ct.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << ct.getAttackDamage() << std::endl;
	std::cout << "-------------------------" << std::endl;
	return ;
}

int main()
{
	DiamondTrap test;
	ClapTrap clap("Clap");
	DiamondTrap diamond("Diamond");
	DiamondTrap cpy(diamond);

	printStatusFrag(test);
	printStatusClap(clap);
	test.attack("Diamond");
	diamond.takeDamage(test.getAttackDamage());
	printStatusFrag(test);
	diamond.attack("enemy");
	printStatusFrag(diamond);
	cpy = diamond;
	printStatusFrag(cpy);
	cpy.beRepaired(5);
	printStatusFrag(diamond);
	printStatusFrag(cpy);
	diamond.takeDamage(10);
	diamond.takeDamage(1);
	diamond.attack("Clap");
	diamond.highFiveGuys();
	diamond.guardGate();
	diamond.whoAmI();
	return (0);
}