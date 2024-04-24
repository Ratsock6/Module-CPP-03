/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:24:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/22 16:47:04 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstring>
#include <iostream>

#define GRAY "\e[38;2;100;100;100m"
#define GRAY2 "\e[38;2;75;75;75m"
#define PURPLE "\e[38;2;186;39;249m"
#define PINK "\e[38;2;255;60;247m"
#define WHITE "\e[38;2;255;255;255m"
#define RED "\e[38;2;243;76;76m"
#define ORANGE "\e[38;2;225;118;24m"

class   ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_healthPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackPoints;
	public:
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;
		void		setName(const std::string name);
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap &operator=(const ClapTrap &clapTrap);
};