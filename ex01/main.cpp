/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:41 by anarama           #+#    #+#             */
/*   Updated: 2024/09/30 13:38:11 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#include <exception>
#include <iostream>

int main(void)
{
	try {
		PhoneBook phone_book;
		handle_main_loop(phone_book);		
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
