/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:08:42 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/16 12:24:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap(fragtrap.getName())
{
	_hitPoints = fragtrap.getHitPoints();
	_energyPoints = fragtrap.getEnergyPoints();
	_attackDamage = fragtrap.getAttackDamage();
	std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragtrap)
{
	this->_hitPoints = fragtrap._hitPoints;
	this->_name = fragtrap._name;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "High five guys!" << std::endl;
}