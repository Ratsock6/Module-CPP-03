/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:15:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/24 17:50:28 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	fizz("Fizz");
	int			i(0);

	std::cout << std::endl;
	fizz.takeDamage(5);
	fizz.attack("Buzz");
	fizz.guardGate();
	std::cout << std::endl;
	std::cout << "A METEOR CRASHES !!" << std::endl;
	fizz.takeDamage(100);
	std::cout << std::endl;
	while (i++ < 10)
		fizz.attack("Meteor");
	std::cout << std::endl;
	fizz.whoAmI();
	return (0);
}