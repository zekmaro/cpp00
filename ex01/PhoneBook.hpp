#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;
	public:

		Contact getContact(int index) const;
		void	addContact(int index);
		void	search();
		void	setNextIndex(int value);
		int		getNextIndex() const;
		void	checkFirstContactEmpty( void );
		void	displayFullContacts( void );
		int		getValidIndex( int min, int max, const std::string& prompt, const std::string& error_message );
		bool	isPhoneBookEmpty( void ) const;
};

#endif //PHONEBOOK_HPP