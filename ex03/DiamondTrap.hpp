/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:29 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 17:50:40 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	private:
		std::string _name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &diamondTrap);
		~DiamondTrap(void);

		std::string	getName(void) const;
		void		setName(const std::string name);
		
		DiamondTrap	&operator=(DiamondTrap const &diamondTrap);


		using ScavTrap::attack;
		void	whoAmI();
};