/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:35:21 by anarama           #+#    #+#             */
/*   Updated: 2024/09/27 22:07:30 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include <iterator>
#include <string>

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "includes.hpp"

Contact PhoneBook::getContact(int index) const
{
	return (this->_contacts[index]);
}

int PhoneBook::getNextIndex() const
{
	return (this->_index);
}

void PhoneBook::setNextIndex(int value)
{
	this->_index = value;
}

bool PhoneBook::isPhoneBookEmpty() const {
    if (!_contacts[0].getIsFull()) {
        std::cout << "Too bad. Nothing to search for. Phonebook is empty" << std::endl;
        return true;
    }
    return false;
}

void PhoneBook::displayFullContacts(void) {
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].getIsFull() == true)
			this->_contacts[i].displayContactShort();
	}
}

bool validate_getline(std::string &var) {
	if (!std::getline(std::cin, var)) {
		std::cout << ERROR_GETLINE << "in get_variable!" << std::endl;
        return false;
	}
	return true;
}

int PhoneBook::getValidIndex(int min, int max, const std::string& prompt,
				const std::string& error_message) {
	std::string input;

	while (true) {
		std::cout << prompt;
		if (!validate_getline(input)) {
			return -1;
		}
		if (input.empty()) {
			std::cout << ERROR_EMPTY_STRING << std::endl;
			continue ;
		}
		try {
			size_t index;
			index = std::stoi(input, &index);
			if (index != input.length()) {
				std::cout << error_message << std::endl;
			}
			else if (index >= min && index <= max) {
				return index;
			}
			else {
				std::cout << error_message << std::endl;
			}
		} 
		catch (const std::invalid_argument& e) {
        	std::cout << "Invalid input! Please enter only numbers.\n";
    	}
		catch (const std::out_of_range& e) {
       		std::cout << "Number is too large! Please try again.\n";
    	}
	}
}

void	PhoneBook::search()
{
	int min = 0;
	int max = 0;
	int index_to_full_display = 0;
	int current_top_index;

	if (isPhoneBookEmpty()) {
		return ;
	}
	displayFullContacts();
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].getIsFull() == true)
			max++;
	}
	std::cout << "Max index: " << max << std::endl;
	index_to_full_display = getValidIndex(min, max - 1, "Enter Index Of The Entry To Display: ",
						"Too bad. Incorrect index! (only digits from 0 to 7)");
	if (index_to_full_display == -1) {
		return ;
	}
	this->_contacts[index_to_full_display].displayContactFull();
}

bool	is_valid_phone_number(std::string number)
{
	if (number.empty()) {
		return false;
	}
	for (int i = 0; i < number.length(); i++)
	{
		if (!std::isdigit(number[i]))
			return false;
	}
	return true;
}

bool display_message_and_save_var(std::string &var, const std::string &display_message,
				const std::string &error_message) {
	std::cout << display_message;
	if (!validate_getline(var)) {
		return false;
	}
	return true;				
}

bool	get_contact_input(std::string &var, const std::string &display_message,
				const std::string &error_message) {
	bool first_iteration = true;
	while (var.empty())
	{
		if (!first_iteration) {	
			std::cout << error_message << std::endl;
		}
		if (!display_message_and_save_var(var, display_message, error_message)) {
			return false;
		}
		first_iteration = false;
	}
	return true;
}

void	PhoneBook::addContact(int index) {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	if (!get_contact_input(first_name, "Enter First Name: ", ERROR_EMPTY_STRING)) return ;
	if (!get_contact_input(last_name, "Enter Last Name: ", ERROR_EMPTY_STRING)) return ;
	if (!get_contact_input(nickname, "Enter Nickname: ", ERROR_EMPTY_STRING)) return ;
	while (true) {
		if (!get_contact_input(phone_number, "Enter Phone Number: ",
					ERROR_EMPTY_STRING)) return ;
		if (is_valid_phone_number(phone_number)) {
			break ;
		}
		else {
			std::cout << ERROR_WRONG_NUMBER << std::endl;
			phone_number = "";
		}
	}
	if (!get_contact_input(darkest_secret, "Enter Darkest Secret...: ",
							ERROR_EMPTY_STRING)) return ;
	this->_contacts[index] = Contact(first_name, last_name, nickname,
						phone_number, darkest_secret, true); 
}
