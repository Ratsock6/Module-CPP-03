/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:21 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 15:43:31 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_name = "Unamed";
	_healthPoints = 100;
	_energyPoints = 50;
	_attackPoints = 20;
	std::cout << GRAY << "ScavTrap Default constructor called" << WHITE << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
	_name = name;
	_healthPoints = 100;
	_energyPoints = 50;
	_attackPoints = 20;
	std::cout << GRAY << "ScavTrap Name constructor called" << WHITE << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap)
{
	std::cout << GRAY << "ClapTrap Copy constructor called" << WHITE << std::endl;
	*this = scavTrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << GRAY << "ScavTrap Destructor called" << WHITE << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
	std::cout << GRAY << "ScavTrap Copy assignment operator called" << WHITE << std::endl;
	_name = scavTrap.getName();
	_attackPoints = scavTrap._attackPoints;
	_healthPoints = scavTrap._healthPoints;
	_energyPoints = scavTrap._energyPoints;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << RED;
	if (_healthPoints == 0)
	{
		std::cout << "ScavTrap " << getName() << " is dead, so it can't attack" << std::endl;
		std::cout << WHITE;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << getName() << " try to attack but he has no Energy Points" << std::endl;
		std::cout << WHITE;
		return ;
	}
	if (_attackPoints == 0)
	{
		std::cout << "ScavTrap " << getName() << " try to attack but he has no Attack Points (" << _attackPoints << ")" << std::endl;
		std::cout << WHITE;
		return ;
	}

	_energyPoints--;
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << _attackPoints << " points of damage !" << std::endl;
	std::cout << "ScavTrap " << getName() << " has now " << _energyPoints << " Energy Points" << std::endl;
	std::cout << WHITE;
}


void	ScavTrap::guardGate(void)
{
	if (_healthPoints > 0)
		std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode !" << std::endl;
}