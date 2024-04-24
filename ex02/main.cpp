/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:15:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 16:04:28 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	fizz("Fizz");
	ScavTrap	buzz("Buzz");
	FragTrap	fuzz("Fuzz");
	int			i(0);

	std::cout << std::endl;
	fuzz.attack("Fizz");
	fizz.takeDamage(5);
	fizz.attack("Buzz");
	buzz.takeDamage(20);
	buzz.beRepaired(42);
	fizz.guardGate();
	std::cout << std::endl;
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(100);
	buzz.takeDamage(100);
	fuzz.highFivesGuys();
	std::cout << std::endl;
	while (i++ < 51)
		buzz.attack("Meteor");
	std::cout << std::endl;
	return (0);
}