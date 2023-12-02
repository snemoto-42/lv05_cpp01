/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:03:30 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _name(str)
{
	;
}

HumanB::~HumanB()
{
	;
}

void	HumanB::setWeapon(Weapon& w)
{
	_weapon = &w;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
}
