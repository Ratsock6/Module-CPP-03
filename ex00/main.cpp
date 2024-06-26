/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:15:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/22 14:38:22 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	fizz("Fizz");
	ClapTrap	buzz("Buzz");
	int			i(0);

	std::cout << std::endl;
	fizz.attack("Buzz");
	buzz.takeDamage(0);
	buzz.beRepaired(42);
	std::cout << std::endl;
	fizz.takeDamage(21);
	buzz.takeDamage(21);
	std::cout << std::endl;
	while (i++ < 11)
		buzz.attack("Meteor");
	std::cout << std::endl;
	return (0);
}