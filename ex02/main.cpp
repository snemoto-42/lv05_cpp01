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

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p = &str;
	std::string &r = str;

	std::cout << &str << "\n";
	std::cout << "pointer: " << p << "\n";
	std::cout << "reference: " << &r << "\n";

	std::cout << "\n";

	std::cout << str << "\n";
	std::cout << "pointer: " << *p << "\n";
	std::cout << "reference: " << r << "\n";

	return (0);
}
