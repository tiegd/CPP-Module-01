/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:43:54 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/03 19:56:46 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

void	replace()
{
	
}

int	main(int ac, char **av)
{
	(void)ac;
	if (ac == 4)
	{
		std::string const 	s1 = av[2];
		std::string 	s2 = av[3];
		std::string		line;
		std::ifstream	infile;

		infile.open(av[1]);
		std::ofstream	outfile;
		std::strcat(av[1], ".replace");

		outfile.open(av[1]);
		if (!outfile.is_open())
		{
			std::cout << "the file isn't open" << std::endl;
			return (1);
		}
		if (infile.is_open())
		{
			while (std::getline(infile, line, '\0'))
			{
				// line.erase(line.find(s1));
				line.find(s1);
				int n = line.find('\n');
				// std::cout << line.find('\n') << std::endl;
				// n = line.find('\n', n);
				// std::cout << line.find('\n', n + 1) << std::endl;
				outfile << line << std::endl;
			}
				// std::cout << line << std::endl;
		}
		std::cout << "the file was correctly opened" << std::endl;
		// myfile.close();
	}
	return (0);
}
