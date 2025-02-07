/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 08:58:09 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 11:15:19 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
	if (this->firstName.empty() == false)
		std::cout << "Deleting " << this->firstName << std::endl;
	else
		std::cout << "Deleting an empty contact" << std::endl;
}

void	Contact::setFirstName(const std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(const std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(const std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(const std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName() const
{
	return (this->firstName);
}

std::string	Contact::getLastName() const
{
	return (this->lastName);
}

std::string	Contact::getNickName() const
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}
