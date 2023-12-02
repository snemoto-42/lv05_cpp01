/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:03:46 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __REPLACE_HPP__
#define __REPLACE_HPP__

#include <iostream>

class Replace
{
	public:
		Replace( std::string, std::string, std::string );
		~Replace( void );

	private:
		std::string	_file;
		std::string	_s1;
		std::string	_s2;
};

#endif /* __REPLACE_HPP__*/
