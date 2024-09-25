/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:40:55 by anarama           #+#    #+#             */
/*   Updated: 2024/09/18 15:50:58 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		std::cout << "Wrong amount of args" << std::endl;
		return (1);
	}
	i = 0;
	while (argv[1][i])
	{
		argv[1][i] = toupper(argv[1][i]);
		i++;
	}
	std::cout << argv[1] << std::endl;
	return (0);
}
