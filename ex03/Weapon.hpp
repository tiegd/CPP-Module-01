/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:29 by gaducurt          #+#    #+#             */
/*   Updated: 2026/02/02 17:35:30 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__
#define __WEAPON__

#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string str);
		std::string	getType();
		void		setType(const std::string &type);
		~Weapon();
};

#endif
