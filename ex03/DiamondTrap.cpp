/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:30:56 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 12:22:08 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("diamondtrap_clap_name"), ScavTrap(), FragTrap() 
{
	this->_name = "diamondtrap";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &fragtrap): ClapTrap(fragtrap.getName())
{
	_hitPoints = fragtrap.getHitPoints();
	_energyPoints = fragtrap.getEnergyPoints();
	_attackDamage = fragtrap.getAttackDamage();
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &fragtrap)
{
	this->_hitPoints = fragtrap._hitPoints;
	this->_name = fragtrap._name;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and my claptrap name is " << ClapTrap::_name << std::endl;
}