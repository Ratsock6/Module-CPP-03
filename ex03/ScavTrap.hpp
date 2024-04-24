/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:29 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 17:36:16 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &scavTrap);
		~ScavTrap(void);
		void		attack(std::string const &target);
		void		guardGate(void);
		ScavTrap	&operator=(ScavTrap const &scavTrap);
};