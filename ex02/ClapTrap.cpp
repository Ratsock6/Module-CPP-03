/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:15:13 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/22 16:54:10 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << GRAY << "ClapTrap Default constructor called" << WHITE << std::endl;
	_name = "Unamed";
	_attackPoints = 1;
	_energyPoints = 10;
	_healthPoints = 10;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << GRAY << "ClapTrap Name constructor called" << WHITE << std::endl;
	_name = name;
	_attackPoints = 1;
	_energyPoints = 10;
	_healthPoints = 10;
}

ClapTrap::~ClapTrap(void) {
	std::cout << GRAY << "ClapTrap Destructor called" << WHITE << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	std::cout << GRAY << "ClapTrap Copy constructor called" << WHITE << std::endl;
	*this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << GRAY << "ClapTrap Copy assignment operator called" << WHITE << std::endl;
	_name = clapTrap.getName();
	_attackPoints = clapTrap._attackPoints;
	_healthPoints = clapTrap._healthPoints;
	_energyPoints = clapTrap._energyPoints;
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

void		ClapTrap::attack(const std::string &target)
{
	std::cout << RED;
	if (_healthPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << " is dead, so it can't attack" << std::endl;
		std::cout << WHITE;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << " try to attack but he has no Energy Points" << std::endl;
		std::cout << WHITE;
		return ;
	}
	if (_attackPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << " try to attack but he has no Attack Points (" << _attackPoints << ")" << std::endl;
		std::cout << WHITE;
		return ;
	}

	_energyPoints--;
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << _attackPoints << " points of damage !" << std::endl;
	std::cout << "ClapTrap " << getName() << " has now " << _energyPoints << " Energy Points" << std::endl;
	std::cout << WHITE;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << ORANGE;
	std::cout << "ClapTrap " << getName() << " has just received " << amount << " points of damage ! ";
	_healthPoints -= amount;
	if (_healthPoints > 0)
	{
		std::cout << "Now he has " << _attackPoints << " " << std::endl;
		std::cout << WHITE;
		return ;
	}
	std::cout << "He is dead" << std::endl;
	std::cout << WHITE;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << PINK;
	if (_healthPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << " is dead, so it can't be repaired" << std::endl;
		std::cout << WHITE;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << getName() << " try to be repaired but he has no Energy Points" << std::endl;
		std::cout << WHITE;
		return ;
	}
	_healthPoints += amount;
	std::cout << "ClapTrap " << getName() << " repairs itself. He now has " << _healthPoints << " Health Points " << std::endl;
	std::cout << WHITE;
}