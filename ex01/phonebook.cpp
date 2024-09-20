#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::add_contact(int index)
{
    std::cout << "Enter First Name: ";
	std::cin >> contacts[index].first_name;
    std::cout << "Enter Last Name: ";
	std::cin >> contacts[index].last_name;
    std::cout << "Enter Nickname: ";
	std::cin >> contacts[index].nickname;
    std::cout << "Enter Phone Number: ";
	std::cin >> contacts[index].phone_number;
    std::cout << "Enter Darkest Secret: ";
	std::cin >> contacts[index].darkest_secret;
}
