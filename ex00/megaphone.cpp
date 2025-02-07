/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:13:38 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 08:41:27 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#define FB "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << FB << std::endl;
	else
	{
		std::string	str;
		for (int i = 1; i < ac; i++)
			str.append(av[i]);
		for (
			std::string::iterator it = str.begin();
			it != str.end();
			it++)
			std::cout << (char) toupper(*it);
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
