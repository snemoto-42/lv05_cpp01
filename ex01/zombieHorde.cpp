/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:03:14 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie *z;
	
	try
	{
		z = new Zombie[N];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::abort();
	}

	for (int idx = 0; idx < N; idx++)
	{
		z[idx]._name = name;
		z[idx].announce();
	}
	return (z);
}
