/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:24:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/18 14:18:58 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstring>
#include <iostream>

class   ClassTrack {
	private:
		std::string		_name;
		unsigned int	_healthPoints = 10;
		unsigned int	_energyPoints = 10;
		unsigned int	_attackPoints = 0;
	public:
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClassTrack(std::string name);
		~ClassTrack(void);
};