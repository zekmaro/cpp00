#include "Contact.hpp"
#include <exception>
#include <iostream>
#include <string>

std::string Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

bool Contact::get_is_empty(void) const
{
	return (this->is_empty);
}

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void Contact::set_is_empty(bool state)
{
	this->is_empty = state;
}

void Contact::display_contact_full(void) {
    std::cout << "First Name: " << get_first_name() << std::endl;
    std::cout << "Last Name: " << get_last_name() << std::endl;
    std::cout << "Nickname: " << get_nickname() << std::endl;
    std::cout << "Phone Number: " << get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << get_darkest_secret() << std::endl;
}

void Contact::display_contact_short(void) {
    std::cout << "First Name: " << get_first_name() << std::endl;
    std::cout << "Last Name: " << get_last_name() << std::endl;
    std::cout << "Nickname: " << get_nickname() << std::endl;
}