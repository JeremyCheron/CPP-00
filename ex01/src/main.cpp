/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:10:51 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 12:41:09 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

int	main(void)
{
	PhoneBook	book;
	std::string	command;

	while (true)
	{
		std::cout << "Enter a command > ";
		std::cin >> command;
		if (std::cin.eof())
			break ;
		if (command == "EXIT" || command == "exit")
			break;
		else if (command == "ADD" || command == "add")
			book.add();
		else if (command == "SEARCH" || command == "search")
			book.search();
		else
		std::cout
			<< "\033[1;31mInvalid command : "
			<< command
			<< std::endl
			<< "Command list : ADD, SEARCH or EXIT\033[0m"
			<< std::endl;
	}
	return (EXIT_SUCCESS);
}
