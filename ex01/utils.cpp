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

#include "PhoneBook.hpp"
#include "includes.hpp"
#include <string>
#include <iostream>

void	handle_main_loop(PhoneBook phone_book)
{
	std::string	command;
	int			next_index;

	phone_book.set_next_index(0);
	while (true)
	{
		if (!std::cin.eof())
			std::cout << "Enter command (ADD/SEARCH/EXIT): ";
		if (!std::getline(std::cin, command) || std::cin.eof()) {
			std::cout << "\nToo bad :( You pressed CTRL-D. Bye!" << std::endl;
			break ;
		}
		if (command == "EXIT") {
			std::cout << "Exiting program!" << std::endl;
			break ;
		}
		else if (command == "ADD") {
			next_index = phone_book.get_next_index();
			phone_book.add_contact(next_index % 8);
			phone_book.set_next_index((next_index + 1) % 8);
		}
		else if (command == "SEARCH") {
			phone_book.search();
		}
		else {
			std::cout << "Incorrect command!" << std::endl;
		}
	}
}
