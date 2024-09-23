#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
	public:

		Contact get_contact(int index) const;
		void	add_contact(int index);
		void	search();
		void	set_index(int value);
		int		get_index() const;
};

#endif //PHONEBOOK_HPP