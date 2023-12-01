/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZonbie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:02:35 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string str)
{
	Zombie *z;

	z = new Zombie;
	z->_name = str;
	return (z);
}
