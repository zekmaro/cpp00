/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:40:55 by anarama           #+#    #+#             */
/*   Updated: 2024/09/30 12:59:28 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	i = 1;
	while (argv[i]) {
		j = 0;
		while (argv[i][j]) {
			argv[i][j] = toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (argv[i]) {
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return 0;
}
