/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:21 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 17:51:17 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	_name = "Unamed";
	this->ClapTrap::setName(_name + "_clap_name");
	_energyPoints = ScavTrap::_energyPoints;
	_healthPoints = FragTrap::_healthPoints;
	_attackPoints = FragTrap::_attackPoints;
	std::cout << GRAY << "DiamondTrap Default constructor called" << WHITE << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
	std::cout << GRAY << "DiamondTrap Name constructor called" << WHITE << std::endl;
	_name = name;
	this->ClapTrap::setName(_name + "_clap_name");
	_energyPoints = ScavTrap::_energyPoints;
	_healthPoints = FragTrap::_healthPoints;
	_attackPoints = FragTrap::_attackPoints;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap)
{
	std::cout << GRAY << "ClapTrap Copy constructor called" << WHITE << std::endl;
	*this = diamondTrap;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << GRAY << "DiamondTrap Destructor called" << WHITE << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	std::cout << GRAY << "DiamondTrap Copy assignment operator called" << WHITE << std::endl;
	_name = diamondTrap.getName();
	_attackPoints = diamondTrap._attackPoints;
	_healthPoints = diamondTrap._healthPoints;
	_energyPoints = diamondTrap._energyPoints;
	this->ClapTrap::setName(_name + "_clap_name");
	return (*this);
}

std::string	DiamondTrap::getName() const
{
	return(_name);
}

void DiamondTrap::setName(std::string dName)
{
	_name = dName;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << GRAY << "--- WHO AM I ---" << WHITE << std::endl;
	std::cout << GREEN << "DiamondTrap Name -> " << getName() << WHITE << std::endl;
	std::cout << GREEN << "ClapTrap Name -> " << ClapTrap::getName() << WHITE << std::endl;
	std::cout << GRAY << "--- WHO AM I ---" << WHITE << std::endl;
}