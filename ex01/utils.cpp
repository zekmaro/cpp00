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

#include "includes.hpp"

static void	search(PhoneBook *phone_book)
{
	int index_search;

	for (int i = 0; i < 8; i++)
	{
		phone_book->contacts[i].display_contact_short();
	}
	std::cout << "Enter Index Of The Entry To Display: ";
	std::cin >> index_search;
	phone_book->contacts[index_search].display_contact_full();
}

void	init_phone_book(PhoneBook *phone_book)
{
	for (int i = 0; i < 8; i++)
	{
		phone_book->contacts[i] = Contact();
	}
}

void	handle_main_loop(PhoneBook *phone_book)
{
	int	index_last_added_contact = 0;
	std::string command;

	while (std::cin >> command && command != "EXIT")
	{
		if (command == "ADD")
		{
			phone_book->add_contact(index_last_added_contact % 8);
			index_last_added_contact++;
		}
		else if (command == "SEARCH")
		{
			search(phone_book);
		}
	}
}
