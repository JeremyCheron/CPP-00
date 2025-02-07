/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 08:47:54 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 11:15:01 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact {

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:

		Contact();
		~Contact();

		void	setFirstName(const std::string firstName);
		void	setLastName(const std::string lastName);
		void	setNickName(const std::string nickName);
		void	setPhoneNumber(const std::string phoneNumber);
		void	setDarkestSecret(const std::string darkestSecret);

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
};
