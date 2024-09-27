/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:35:21 by anarama           #+#    #+#             */
/*   Updated: 2024/09/27 17:38:04 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "includes.hpp"

Contact PhoneBook::get_contact(int index) const
{
	return (this->_contacts[index]);
}

int PhoneBook::get_next_index() const
{
	return (this->_index);
}

void PhoneBook::set_next_index(int value)
{
	this->_index = value;
}

void	PhoneBook::search()
{
	int index_to_search = 0;

	if (this->_contacts[0].getIsFull() == false)
	{
		std::cout << "Too bad. Nothing to search for. Phone book is empty" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].getIsFull() == true)
			this->_contacts[i].displayContactShort();
	}
	std::cout << "Enter Index Of The Entry To Display: ";
	std::cin >> index_to_search;
	while (index_to_search > 7 || index_to_search < 0)
	{
		std::cout << "Too bad. Incorrect index! (only digits from 0 to 7)" << std::endl;
		std::cout << "Enter Index Of The Entry To Display: ";
		std::cin >> index_to_search;
	}
	this->_contacts[index_to_search].displayContactFull();
}

bool	is_valid_phone_number(std::string number)
{
	for (int i = 0; i < number.length(); i++)
	{
		if (!std::isdigit(number[i]))
			return false;
	}
	return true;
}

bool	get_variable(std::string &var, std::string display_message,
				std::string error_message)
{
	std::cout << display_message;
	if (!std::getline(std::cin, var)) {
		std::cout << "Get line failed in get_variable!" << std::endl;
        return false;
	}
	else if (std::cin.eof()) {
		std::cout << "Input stream was ended with CTRL-D in get_variable" << std::endl;
		return false;
	}
	while (var.empty())
	{
		std::cout << error_message << std::endl;
		std::cout << display_message;
		if (!std::getline(std::cin, var)) {
			std::cout << "Get line failed in get_variable!" << std::endl;
			return false;
		}
		else if (std::cin.eof()) {
			std::cout << "Input stream was ended with CTRL-D in get_variable" << std::endl;
			return false;
		}
	}
	return true;
}

void	PhoneBook::add_contact(int index)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	if (!get_variable(first_name, "Enter First Name: ", ERROR_EMPTY_STRING)) {
		return ;
	}
	if (!get_variable(last_name, "Enter Last Name: ", ERROR_EMPTY_STRING)) {
		return ;
	}
	if (!get_variable(nickname, "Enter Nickname: ", ERROR_EMPTY_STRING)) {
		return ;
	}
	do {
		if (!get_variable(phone_number, "Enter Phone Number: ", ERROR_EMPTY_STRING)) {
			return ;
		}
		if (!is_valid_phone_number(phone_number)) {
			std::cout << ERROR_WRONG_NUMBER << std::endl;
		}
	} while  (!is_valid_phone_number(phone_number));

	if (!get_variable(darkest_secret, "Enter Darkest Secret...: ", ERROR_EMPTY_STRING)) {
		return ;
	}
	this->_contacts[index] = Contact(first_name, last_name, nickname,
						phone_number, darkest_secret, true); 
}
