/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:35:45 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 08:38:01 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("claptrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap): _name(claptrap.getName()), _hitPoints(claptrap.getHitPoints()), _energyPoints(claptrap.getEnergyPoints()), _attackDamage(claptrap.getAttackDamage())
{
	std::cout << "Copy Claptrap constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->_hitPoints = claptrap._hitPoints;
	this->_name = claptrap._name;
	this->_energyPoints = claptrap._energyPoints;
	this->_attackDamage = claptrap._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
	return(this->_name);
}

int	ClapTrap::getAttackDamage() const
{
	return(this->_attackDamage);
}

int	ClapTrap::getEnergyPoints() const
{
	return(this->_energyPoints);
}

int	ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "Claptrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "Claptrap " << this->getName() << " doesn't have enough energy to attack" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "Claptrap " << this->getName() << " repairs itself " << amount << " points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "Claptrap " << this->getName() << " doesn't have enough energy to repair itself" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << "Claptrap " << this->getName() << " received " << amount << " points of damage" << std::endl;
		if (this->_hitPoints < 0)
		{
			this->_hitPoints = 0;
			std::cout << "Claptrap " << this->getName() << " has 0 hit points, it is defeated" << std::endl;
		}
		else
			std::cout << "Claptrap " << this->getName() << " has " << this->getHitPoints() << " hit points" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->getName() << " cannot receive more damage" << std::endl;
}