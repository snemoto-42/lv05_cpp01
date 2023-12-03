/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:48:30 by snemoto           #+#    #+#             */
/*   Updated: 2023/12/03 17:27:30 by snemoto          ###   ########.fr       */
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
		std::cerr << "--- Fail to open file ---\n";
		std::exit(0);
	}
	
	std::ofstream ofs("./file.replace");

	while (!ifs.eof())
	{
		std::string	str;

		getline(ifs, str);
		if (ifs.bad())
		{
			std::cout << "--- Error Input ---\n";
			std::exit(0);
		}

		std::string::size_type	len = str.length();
		std::string::size_type	*pos;

		try
		{
			pos = new std::string::size_type[len];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			std::abort();
		}

		unsigned int	idx = 0;

		for (unsigned int i = 0; i < len; i++)
			pos[i] = std::string::npos;

		while (idx < len && !_s1.empty() && _s1 != _s2)
		{
			if (pos[idx] == std::string::npos)
				pos[idx + 1] = str.find(_s1, 0);
			else
				pos[idx + 1] = str.find(_s1, pos[idx] + 1);
			if (pos[idx + 1] < len)
				;
			else
				break ;
			++idx;
		}

		for (unsigned int i = 0; i < idx; i++)
		{
			str.erase(pos[i + 1], _s1.length());	
			str.insert(pos[i + 1], _s2);
		}

		delete[] pos;

		if (!ifs.eof())
			ofs << str << "\n";
		else
			ofs << str;
	}
}
