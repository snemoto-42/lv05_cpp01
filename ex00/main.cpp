/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 12:48:31 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1;
	
	Zombie *zz = z1.newZombie("SHOTA");
	zz->announce();
	delete zz;

	Zombie *z2 = new Zombie;
	z2->randomChump("NEOTO");
	delete z2;

	return (0);
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
system("leaks -q zombie");
}
