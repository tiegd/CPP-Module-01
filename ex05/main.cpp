/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:34:49 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/04 15:01:50 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main()
{
	Harl	harl;
	std::string	prompt;
	
	while (std::cin.good())
	{
		std::getline(std::cin, prompt);
		harl.complain(prompt);
	}
	return (0);
}
