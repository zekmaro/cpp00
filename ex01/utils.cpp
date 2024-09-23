/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:41 by anarama           #+#    #+#             */
/*   Updated: 2024/09/20 13:54:53 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "includes.hpp"
#include <string>

void	handle_main_loop(PhoneBook phone_book)
{
	std::string command;
	int	index;

	phone_book.set_index(0);
	while (command != "EXIT")
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			index = phone_book.get_index();
			phone_book.add_contact(index % 8);
			phone_book.set_index((index + 1) % 8);
			std::cout << "New Contact Added!" << std::endl;
		}
		else if (command == "SEARCH")
		{
			phone_book.search();
		}
	}
}
