/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:53:23 by anarama           #+#    #+#             */
/*   Updated: 2024/09/28 20:22:45 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact( void ) {
	this->_first_name = DEFAULT_FIRST_NAME;
	this->_last_name = DEFAULT_LAST_NAME;
	this->_nickname = DEFAULT_NICKNAME;
	this->_phone_number = DEFAULT_PHONE_NUMBER;
	this->_first_name = DEFAULT_FIRST_NAME;
	this->_is_full = DEFAULT_IS_FULL;
}

Contact::Contact( std::string first_name, std::string last_name,
				std::string nickname, std::string phone_number,
				std::string darkest_secret, bool state ) :
	_first_name(first_name),
	_last_name(last_name),
	_nickname(nickname),
	_phone_number(phone_number),
	_darkest_secret(darkest_secret),
	_is_full(state)
{
	std::cout << "New Contact Added!" << std::endl;
}

Contact::~Contact( void ) {
	
}

std::string Contact::getFirstName( void ) const {
	return (this->_first_name);
}

std::string Contact::getLastName( void ) const {
	return (this->_last_name);
}

std::string Contact::getNickname( void ) const {
	return (this->_nickname);
}

std::string Contact::getPhoneNumber( void ) const {
	return (this->_phone_number);
}

std::string Contact::getDarkestSecret( void ) const {
	return (this->_darkest_secret);
}

bool Contact::getIsFull( void ) const {
	return (this->_is_full);
}

void Contact::setFirstName( std::string first_name ) {
	this->_first_name = first_name;
}

void Contact::setLastName( std::string last_name ) {
	this->_last_name = last_name;
}

void Contact::setNickname( std::string nickname ) {
	this->_nickname = nickname;
}

void Contact::setPhoneNumber( std::string phone_number ) {
	this->_phone_number = phone_number;
}

void Contact::setDarkestSecret( std::string darkest_secret ) {
	this->_darkest_secret = darkest_secret;
}

void Contact::setIsFull( bool state ) {
	this->_is_full = state;
}

void Contact::displayContactFull(void) {
	std::cout << "------------" << std::endl;
    std::cout << "First Name: " << getFirstName() << std::endl;
    std::cout << "Last Name: " << getLastName() << std::endl;
    std::cout << "Nickname: " << getNickname() << std::endl;
    std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
	std::cout << "------------" << std::endl;
}

void Contact::displayContactShort(void) {
	std::cout << "------------" << std::endl;
    std::cout << "First Name: " << getFirstName() << std::endl;
    std::cout << "Last Name: " << getLastName() << std::endl;
    std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "------------" << std::endl;
}
