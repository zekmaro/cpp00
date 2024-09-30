/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:08:48 by anarama           #+#    #+#             */
/*   Updated: 2024/09/30 13:03:38 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

# define DEFAULT_INDEX 0

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;
		int		_taken;

	public:
		PhoneBook( void );
		PhoneBook( int index );
		~PhoneBook( void );

		Contact getContact( int index ) const;
		void	addContact(int index);
		void	search( void );
		void	setIndex( int value );
		int		getIndex( void ) const;

		void	checkFirstContactEmpty( void );
		void	displayFullContacts( void );
		int		getValidIndexInput( int min, int max, const std::string& prompt,
						const std::string& error_message );
		bool	isPhoneBookEmpty( void ) const;
};

#endif //PHONEBOOK_HPP