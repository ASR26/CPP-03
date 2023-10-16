/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:08:42 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 10:34:49 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default Scavtrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Scavtrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap.getName())
{
	_hitPoints = scavtrap.getHitPoints();
	_energyPoints = scavtrap.getEnergyPoints();
	_attackDamage = scavtrap.getAttackDamage();
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavtrap)
{
	this->_hitPoints = scavtrap._hitPoints;
	this->_name = scavtrap._name;
	this->_energyPoints = scavtrap._energyPoints;
	this->_attackDamage = scavtrap._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "Scavtrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "Scavtrap " << this->getName() << " doesn't have enough energy to attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << this->getName() << " is guarding the gate now" << std::endl;
}