/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:29 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 15:58:34 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &fragTrap);
		~FragTrap(void);
		void		highFivesGuys(void);
		FragTrap	&operator=(FragTrap const &fragTrap);
};