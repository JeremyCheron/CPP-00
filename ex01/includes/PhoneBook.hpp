/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 08:43:40 by jcheron           #+#    #+#             */
/*   Updated: 2025/02/07 12:13:25 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

class PhoneBook {

	private:
		Contact	contacts[8];
		int		contactCount;

		int		_ask(std::string question, Contact &contact, int index);
		void	_displayShort();
		void	_displayFull_();
		int		_get_next_idx() const;

	public:

		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
};
