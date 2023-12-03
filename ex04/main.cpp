/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/03 16:03:53 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "--- Invalid parameters ---\n";
		return (0);
	}
	Replace r(argv[1], argv[2], argv[3]);
	r.exec();

	return (0);
}

#include <libc.h>
__attribute__((destructor))
static void destructor() {
std::cout << "\n";
system("leaks -q replace");
}
