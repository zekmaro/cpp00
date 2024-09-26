/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makkie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:30:54 by anarama           #+#    #+#             */
/*   Updated: 2024/09/26 20:57:25 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Makkie.hpp"

Makkie::Makkie(void) : Makkie(DEFAULT_NAME) {
	std::cout << "Constructor default. Bark" << std::endl;
	// this->_name = DEFAULT_NAME;
}

Makkie::Makkie(std::string name) : _name(name) {
	std::cout << "Constructor with one arg name. Bark" << std::endl;
	// this->_name = name;
}

Makkie::~Makkie(void) {
	std::cout << "Destructor default. Bark " << this->getName() << std::endl;
}

std::string	Makkie::getName() const {
	return this->_name;
}

void		Makkie::setName(std::string new_name) {
	this->_name = new_name;
}
