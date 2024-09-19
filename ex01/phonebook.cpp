/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:52:07 by anarama           #+#    #+#             */
/*   Updated: 2024/09/18 15:52:33 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void	create_new_contact(Contact *contact)
{
	std::cout << "Enter First Name: ";
	std::cin >> contact->first_name;
	std::cout << "Enter Last Name: ";
	std::cin >> contact->last_name;
	std::cout << "Enter Last Name: ";
	std::cin >> contact->last_name;
	std::cout << "Enter Nickname: ";
	std::cin >> contact->nickname;
	std::cout << "Enter Phone Number: ";
	std::cin >> contact->phone_number;
	std::cout << "Enter Darkest Secret: ";
	std::cin >> contact->darkest_secret;
}

void	search_for_contact()

void	init_phone_book_contacts(PhoneBook *phone_book)
{
	for (int i = 0; i < 8; i++)
	{
		phone_book->contacts[i] = Contact();
		i++;
	}
}

int main(int argc, char **agrv)
{
	int			last_added_contact_index = 0;
	PhoneBook	phone_book;
	std::string command;

	init_phone_book_contacts(&phone_book);
	while (std::cin >> command)
	{
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			create_new_contact(&phone_book.contacts[last_added_contact_index % 8]);
			last_added_contact_index++;
		}
		else if (command == "SEARCH")
		{

		}
	}
}
