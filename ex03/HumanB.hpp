/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:03:32 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMAN_B_HPP__
#define __HUMAN_B_HPP__

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB( std::string );
		~HumanB( void );

		void	setWeapon( Weapon& );
		void	attack( void );

	private:
		std::string	_name;
		Weapon*	 	_weapon;
};

#endif /* __HUMAN_B_HPP__ */
