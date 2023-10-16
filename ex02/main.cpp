/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:47 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 12:34:16 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	FragTrap test;
	ClapTrap clap("Clap");
	FragTrap frag("Frag");
	FragTrap cpy(frag);

	printStatusFrag(test);
	printStatusClap(clap);
	test.attack("Frag");
	frag.takeDamage(test.getAttackDamage());
	printStatusFrag(test);
	frag.attack("enemy");
	printStatusFrag(frag);
	cpy = frag;
	printStatusFrag(cpy);
	cpy.beRepaired(5);
	printStatusFrag(frag);
	printStatusFrag(cpy);
	frag.takeDamage(10);
	frag.takeDamage(1);
	frag.attack("Second Claptrap");
	frag.highFiveGuys();
	return (0);
}