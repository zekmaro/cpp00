#include "PhoneBook.hpp"
#include <iostream>
#include <string>

Contact PhoneBook::get_contact(int index) const
{
	return (this->contacts[index]);
}

int PhoneBook::get_index() const
{
	return (this->index);
}

void PhoneBook::set_index(int value)
{
	this->index = value;
}

void	PhoneBook::search()
{
	int index_to_search = 0;

	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].get_is_empty() == false)
			this->contacts[i].display_contact_short();
	}
	std::cout << "Enter Index Of The Entry To Display: ";
	std::cin >> index_to_search;
	this->contacts[index_to_search].display_contact_full();
}

void	PhoneBook::add_contact(int index)
{
	std::string temp_str;

    std::cout << "Enter First Name: ";
	std::getline(std::cin, temp_str);
	this->contacts[index].set_first_name(temp_str);
    std::cout << "Enter Last Name: ";
	std::getline(std::cin, temp_str);
	this->contacts[index].set_last_name(temp_str);
    std::cout << "Enter Nickname: ";
	std::getline(std::cin, temp_str);
	this->contacts[index].set_nickname(temp_str);
    std::cout << "Enter Phone Number: ";
	std::getline(std::cin, temp_str);
	this->contacts[index].set_phone_number(temp_str);
    std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, temp_str);
	this->contacts[index].set_darkest_secret(temp_str);
	this->contacts[index].set_is_empty(false);
}
