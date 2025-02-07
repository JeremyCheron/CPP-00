/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:04:11 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 12:57:10 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
		std::cout
			<< "\033[1;32mPhonebook created\033[0m"
			<< std::endl;
}

PhoneBook::~PhoneBook()
{
		std::cout
			<< "\033[1;32mPhonebook destroyed\033[0m"
			<< std::endl;
}

int PhoneBook::_get_next_idx() const
{
	static int idx = 0;
	if (this->contacts[0].getFirstName().empty())
		return (0);
	idx++;
	if (idx == 8)
		idx = idx % 8;
	return (idx);
}

static std::string displayShortString(const std::string str)
{
	return (str.length() < 10) ? str : str.substr(0, 9) + ".";
}

void	PhoneBook::search()
{
	if (this->contacts[0].getFirstName().empty())
	{
		std::cout
			<< "\033[1;31mPhonebook is empty\033[0m"
			<< std::endl;
		return ;
	}
	PhoneBook::_displayShort();
	std::string	index;
	std::cout
		<< "Enter index >";
	while (index.empty())
	{
		if (std::cin.eof())
			return ;
		getline(std::cin, index);
	}
	if (index.length() != 1 || index[0] < '1' || index[0] > '8')
	{
		std::cout
			<< "\033[1;31mInvalid index\033[0m"
			<< std::endl;
		return ;
	}
	int	i = std::atoi(index.c_str()) - 1;
	if (this->contacts[i].getFirstName().empty())
	{
		std::cout
			<< "\033[1;31mInvalid index\033[0m"
			<< std::endl;
		return ;
	}
	std::cout
		<< "\033[1;34mDisplaying contact "
		<< i + 1
		<< "\033[0m"
		<< std::endl;
	std::cout
		<< "Firstname: "
		<< this->contacts[i].getFirstName()
		<< std::endl
		<< "Lastname: "
		<< this->contacts[i].getLastName()
		<< std::endl
		<< "Nickname: "
		<< this->contacts[i].getNickName()
		<< std::endl
		<< "Phone number: "
		<< this->contacts[i].getPhoneNumber()
		<< std::endl
		<< "Darkest secret: "
		<< this->contacts[i].getDarkestSecret()
		<< std::endl;
}

void PhoneBook::_displayShort()
{
	int idx = 0;
	if (this->contacts[idx].getFirstName().empty())
	{
		std::cout
			<< "\033[31mPhonebook is empty\033[0m"
			<< std::endl;
		return ;
	}
	std::cout
		<< "\033[1;34mDisplaying contacts\033[0m"
		<< std::endl;
	std::cout
		<< std::setw(45)
		<< std::setfill('-')
		<< ""
		<< std::endl
		<< std::setfill(' ');
	std::cout
		<< "|"
		<< std::setw(10)
		<< "index";
	std::cout
		<< "|"
		<< std::setw(10)
		<< "firstname";
	std::cout
		<< "|"
		<< std::setw(10)
		<< "lastname";
	std::cout
		<< "|"
		<< std::setw(10)
		<< "nickname";
	std::cout
		<< "|"
		<< std::endl;
	std::cout
		<< std::setw(45)
		<< std::setfill('-')
		<< ""
		<< std::endl
		<< std::setfill(' ');
	while (idx < 8)
	{
		if (this->contacts[idx].getFirstName().empty())
			break ;
		std::cout
			<< "|"
			<< std::setw(10)
			<< idx + 1;
		std::cout
			<< "|"
			<< std::setw(10)
			<< displayShortString(this->contacts[idx].getFirstName());
		std::cout
			<< "|"
			<< std::setw(10)
			<< displayShortString(this->contacts[idx].getLastName());
		std::cout
			<< "|"
			<< std::setw(10)
			<< displayShortString(this->contacts[idx].getNickName());
		std::cout
			<< "|"
			<< std::endl;
		std::cout
			<< std::setw(45)
			<< std::setfill('-')
			<< ""
			<< std::endl
			<< std::setfill(' ');
		idx++;
	}
}

void	PhoneBook::add()
{
	std::string	question[5] = {
		"Enter first name",
		"Enter last name",
		"Enter nick name",
		"Enter Phone number",
		"Enter darkest secret"
	};
	int idx = _get_next_idx();
	std::cout
		<< "\033[1;34mAdding contact at index "
		<< idx + 1
		<< "\033[0m"
		<< std::endl;
	std::cin.ignore();
	for (int i = 0; i < 5; i++)
	{
		if (this->_ask(question[i], this->contacts[idx], i) == EXIT_FAILURE)
			break ;
	}}

int	PhoneBook::_ask(std::string question, Contact &contact, int index)
{
	std::string	input;

	std::cout
		<< question;
	std::cout
		<< " > ";
	while (input.empty())
	{
		if (std::cin.eof())
			return (EXIT_FAILURE);
		getline(std::cin, input);
	}
	switch (index)
	{
		case 0:
			contact.setFirstName(input);
			break ;
		case 1:
			contact.setLastName(input);
			break ;
		case 2:
			contact.setNickName(input);
			break ;
		case 3:
			contact.setPhoneNumber(input);
			break ;
		case 4:
			contact.setDarkestSecret(input);
			break ;
	}
	return (EXIT_SUCCESS);
}
