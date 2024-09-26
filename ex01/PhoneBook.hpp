#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;
	public:

		Contact get_contact(int index) const;
		void	add_contact(int index);
		void	search();
		void	set_next_index(int value);
		int		get_next_index() const;
};

#endif //PHONEBOOK_HPP