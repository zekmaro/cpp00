/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:35:21 by anarama           #+#    #+#             */
/*   Updated: 2024/09/30 15:41:29 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "includes.hpp"

PhoneBook::PhoneBook( void ) : _index(DEFAULT_INDEX), _taken(DEFAULT_INDEX) {}

PhoneBook::PhoneBook( int index ) : _index(index) {}

PhoneBook::~PhoneBook( void ) {}

Contact PhoneBook::getContact( int index ) const {
	return this->_contacts[index];
}

int PhoneBook::getIndex( void ) const {
	return this->_index;
}

void PhoneBook::setIndex( int value ) {
	this->_index = value;
}

void displayHeader( void ) {
    std::cout << std::setw(10) << "Index" << '|'
              << std::setw(10) << "First Name" << '|'
              << std::setw(10) << "Last Name" << '|'
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
}

bool PhoneBook::isPhoneBookEmpty( void ) const {
    if (!_contacts[0].getIsFull()) {
        std::cout << "Too bad. Nothing to search for. Phonebook is empty" << std::endl;
        return true;
    }
    return false;
}

void PhoneBook::displayFullContacts( void ) {
	displayHeader();
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].getIsFull() == true) {
			this->_contacts[i].displayContactShort(i);
		}
	}
}

bool validate_getline(std::string &var) {
	if (!std::getline(std::cin, var)) {
        return false;
	}
	return true;
}

bool	is_valid_phone_number(std::string number)
{
	if (number.empty()) {
		return false;
	}
	for (size_t i = 0; i < number.length(); i++)
	{
		if (!std::isdigit(number[i]))
			return false;
	}
	return true;
}

int PhoneBook::getValidIndexInput(int min, int max, const std::string& prompt,
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
			if (input.length() > 1) {
				std::cout << error_message << std::endl;	
			}
			else if (input[0] - '0' >= min && input[0] - '0' <= max) {
				return input[0] - '0';
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
	int index_to_full_display = 0;

	if (isPhoneBookEmpty()) {
		return ;
	}

	displayFullContacts();

	index_to_full_display = getValidIndexInput(min, _taken - 1, "Enter Index Of The Entry To Display: ", "Too bad. Incorrect index! (only digits from 0 to 7, no spaces)");
	if (index_to_full_display == -1) {
		return ;
	}
	
	this->_contacts[index_to_full_display].displayContactFull();
}

bool display_message_and_save_var(std::string &var, const std::string &display_message) {
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
		if (!display_message_and_save_var(var, display_message)) {
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
		if (!get_contact_input(phone_number, "Enter Phone Number: ", ERROR_EMPTY_STRING)) return ;
		
		if (is_valid_phone_number(phone_number)) {
			break ;
		} else {
			std::cout << ERROR_WRONG_NUMBER << std::endl;
			phone_number = "";
		}
	}
	if (!get_contact_input(darkest_secret, "Enter Darkest Secret...: ", ERROR_EMPTY_STRING)) return ;
	this->_contacts[index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret, true);
	
	if (_taken < 8) _taken++;
}
