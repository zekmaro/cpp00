#include "Contact.hpp"
#include <iostream>
#include <string>

std::string Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

bool Contact::get_is_full(void) const
{
	return (this->_is_full);
}

void Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

void Contact::set_is_full(bool state)
{
	this->_is_full = state;
}

void Contact::display_contact_full(void) {
	std::cout << "------------" << std::endl;
    std::cout << "First Name: " << get_first_name() << std::endl;
    std::cout << "Last Name: " << get_last_name() << std::endl;
    std::cout << "Nickname: " << get_nickname() << std::endl;
    std::cout << "Phone Number: " << get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << get_darkest_secret() << std::endl;
	std::cout << "------------" << std::endl;
}

void Contact::display_contact_short(void) {
	std::cout << "------------" << std::endl;
    std::cout << "First Name: " << get_first_name() << std::endl;
    std::cout << "Last Name: " << get_last_name() << std::endl;
    std::cout << "Nickname: " << get_nickname() << std::endl;
	std::cout << "------------" << std::endl;
}
