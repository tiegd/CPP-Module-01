/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:43:54 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/04 11:28:20 by gaducurt         ###   ########.fr       */
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
	if (ac == 4)
	{
		std::string const 		s1 = av[2];
		std::string 			s2 = av[3];
		std::string				line;
		std::ifstream			infile;
		std::string::size_type	n;

		infile.open(av[1]);
		std::ofstream	outfile;
		std::strcat(av[1], ".replace");

		outfile.open(av[1]);
		if (!outfile.is_open())
			return (1);
		if (infile.is_open())
		{
			while (std::getline(infile, line, '\0'))
			{
				n = line.find(s1);
				while (n <= std::string::npos)
				{
					if (n == std::string::npos)
						break;
					line.erase(n, s1.length());
					line.insert(n, s2);
					n = line.find(s1);
				}
			}
			outfile << line << std::endl;
		}
	}
	return (0);
}
