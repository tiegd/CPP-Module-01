/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:43:54 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/13 18:01:48 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int	replace(char **s)
{
	std::string const 		s1 = s[2];
	std::string 			s2 = s[3];
	std::string				line;
	std::ifstream			infile;
	std::string::size_type	n;

	infile.open(s[1]);
	std::ofstream	outfile;
	std::strcat(s[1], ".replace");

	outfile.open(s[1]);
	if (!outfile.is_open())
		return (1);
	if (infile.is_open())
	{
		while (std::getline(infile, line, '\0'))
		{
			if (s1.length() != 0 && s2.length() != 0)
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
		}
		outfile << line;
	}
	return (0);
}

int	main(int ac, char **av)
{
	
	if (ac == 4)
		return (replace(av));
	return (1);
}
