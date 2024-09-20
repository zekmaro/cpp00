#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		Contact	contacts[8];
	
	void	add_contact(int index);
};

#endif //PHONEBOOK_HPP