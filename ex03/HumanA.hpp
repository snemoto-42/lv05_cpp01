/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:03:28 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMAN_A_HPP__
#define __HUMAN_A_HPP__

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA( std::string, Weapon& );
		~HumanA( void );

		void	attack( void );

	private:
		std::string	_name;
		Weapon& 	_weapon;
};

#endif /* __HUMAN_A_HPP__ */
