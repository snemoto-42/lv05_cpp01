/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/03 15:31:46 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	;
}

Harl::~Harl(void)
{
	;
}

void	Harl::complain(std::string level)
{
	static const char	*const	array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t	idx;

	for (idx = 0; idx < sizeof(array) / sizeof(*array); idx++)
		if (level.compare(array[idx]) == 0)
			break ;

	void	(Harl::*func_d)() = &Harl::debug;
	void	(Harl::*func_i)() = &Harl::info;
	void	(Harl::*func_w)() = &Harl::warning;
	void	(Harl::*func_e)() = &Harl::error;

	switch( idx )
	{
		case 0:
			(this->*func_d)();
			break ;
		case 1:
			(this->*func_i)();
			break ;
		case 2:
			(this->*func_w)();
			break ;
		case 3:
			(this->*func_e)();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
