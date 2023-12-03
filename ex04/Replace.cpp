/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/10/15 17:03:44 by snemoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string f, std::string s1, std::string s2)
{
	_file = f;
	_s1 = s1;
	_s2 = s2;
}

Replace::~Replace(void)
{
	;
}

void	Replace::exec(void)
{
	std::ifstream ifs(_file);
	if (ifs.fail())
	{
		std::cerr << "---Fail to open file---\n";
		std::exit(0);
	}
	
	std::ofstream ofs("./out.txt");
	while (!ifs.eof())
	{
		std::string	str;
		getline(ifs, str);
		if (ifs.bad())
		{
			std::cout << "---Error Input---\n";
			std::exit(0);
		}
		std::string::size_type len = str.length();
		while (1)
		{
			std::string::size_type pos = str.find(_s1);
			if (pos < len)
			{
				str.erase(pos, _s1.length());
				str.insert(pos, _s2);
			}
			else
				break ;
		}
		ofs << str << "\n";
	}
}
