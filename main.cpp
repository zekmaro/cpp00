/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:37:08 by anarama           #+#    #+#             */
/*   Updated: 2024/09/26 21:01:39 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Makkie.hpp"

void foo(Makkie mak) {
	std::cout << mak.getName() << std::endl;
}

int main(void)
{
	std::cout << "Beggining of the method" << std::endl;
	
	Makkie pes1;
	{
		Makkie pes2("Name");
		foo(pes2);
	}
	{
		std::cout << "Scope 2 test start" << std::endl;

		Makkie pes3 = Makkie("Barsik");

		std::cout << "Scope 2 test end" << std::endl;
	}

	std::cout << "Gav gav" << std::endl;
	return (0);
}