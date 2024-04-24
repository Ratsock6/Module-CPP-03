/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:21 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 16:01:24 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_name = "Unamed";
	_healthPoints = 100;
	_energyPoints = 100;
	_attackPoints = 30;
	std::cout << GRAY << "FragTrap Default constructor called" << WHITE << std::endl;
}

FragTrap::FragTrap(std::string const &name)
{
	_name = name;
	_healthPoints = 100;
	_energyPoints = 100;
	_attackPoints = 30;
	std::cout << GRAY << "FragTrap Name constructor called" << WHITE << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrap)
{
	std::cout << GRAY << "ClapTrap Copy constructor called" << WHITE << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap(void)
{
	std::cout << GRAY << "FragTrap Destructor called" << WHITE << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	std::cout << GRAY << "FragTrap Copy assignment operator called" << WHITE << std::endl;
	_name = fragTrap.getName();
	_attackPoints = fragTrap._attackPoints;
	_healthPoints = fragTrap._healthPoints;
	_energyPoints = fragTrap._energyPoints;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_healthPoints > 0)
		std::cout << GREEN << "FragTrap " << getName() << " request an High Five !" << WHITE << std::endl;
}