#include "PhoneBook.hpp"
#include <cctype>
#include <iostream>
#include <string>

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

	if (this->_contacts[0].get_is_full() == false)
	{
		std::cout << "Too bad. Nothing to search for. Phone book is empty" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].get_is_full() == true)
			this->_contacts[i].display_contact_short();
	}
	std::cout << "Enter Index Of The Entry To Display: ";
	std::cin >> index_to_search;
	while (index_to_search > 7 || index_to_search < 0)
	{
		std::cout << "Too bad. Incorrect index! (only digits from 0 to 7)" << std::endl;
		std::cout << "Enter Index Of The Entry To Display: ";
		std::cin >> index_to_search;
	}
	this->_contacts[index_to_search].display_contact_full();
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

void	PhoneBook::add_contact(int index)
{
	std::string temp_str;

    std::cout << "Enter First Name: ";
	if (!std::getline(std::cin, temp_str) || std::cin.eof())
        return;
	while (temp_str.empty())
	{
		std::cout << "Too bad :_). No empty strings allowed" << std::endl;
		std::cout << "Enter First Name: ";
		if (!std::getline(std::cin, temp_str) || std::cin.eof())
			return;
	}
	this->_contacts[index].set_first_name(temp_str);
    std::cout << "Enter Last Name: ";
	if (!std::getline(std::cin, temp_str) || std::cin.eof())
        return;
	this->_contacts[index].set_last_name(temp_str);
    std::cout << "Enter Nickname: ";
	if (!std::getline(std::cin, temp_str) || std::cin.eof())
        return;
	this->_contacts[index].set_nickname(temp_str);
    std::cout << "Enter Phone Number: ";
	if (!std::getline(std::cin, temp_str) || std::cin.eof())
        return;
	while (is_valid_phone_number(temp_str) == false)
	{
		std::cout << "TOO BAD! Wrong number! Try again. (Only digits are allowed)" << std::endl;
		std::cout << "Enter Phone Number: ";
		if (!std::getline(std::cin, temp_str) || std::cin.eof())
			return;
	}
	this->_contacts[index].set_phone_number(temp_str);
    std::cout << "Enter Darkest Secret: ";
	if (!std::getline(std::cin, temp_str) || std::cin.eof())
        return;
	this->_contacts[index].set_darkest_secret(temp_str);
	this->_contacts[index].set_is_full(true);
	std::cout << "New Contact Added!" << std::endl;
}
