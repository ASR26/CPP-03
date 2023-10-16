/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:47 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 12:33:50 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

void	printStatusScav(const ScavTrap& ct)
{
	std::cout << "-----SCAVTRAP STATUS-----" << std::endl;
	std::cout << "Name: " << ct.getName() << std::endl;
	std::cout << "Hit points: " << ct.getHitPoints() << std::endl;
	std::cout << "Energy points: " << ct.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << ct.getAttackDamage() << std::endl;
	std::cout << "-------------------------" << std::endl;
	return ;
}

int main()
{
	ScavTrap test;
	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	ScavTrap cpy(scav);

	printStatusScav(test);
	printStatusClap(clap);
	test.attack("Scav");
	scav.takeDamage(test.getAttackDamage());
	printStatusScav(test);
	scav.attack("enemy");
	printStatusScav(scav);
	cpy = scav;
	printStatusScav(cpy);
	cpy.beRepaired(5);
	printStatusScav(scav);
	printStatusScav(cpy);
	scav.takeDamage(10);
	scav.takeDamage(1);
	scav.attack("Second Claptrap");
	scav.guardGate();
	return (0);
}