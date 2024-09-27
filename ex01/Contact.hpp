/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:50:22 by anarama           #+#    #+#             */
/*   Updated: 2024/09/27 21:14:20 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

# define DEFAULT_FIRST_NAME "first_name"
# define DEFAULT_LAST_NAME "last_name"
# define DEFAULT_NICKNAME "nickname"
# define DEFAULT_PHONE_NUMBER "phone_number"
# define DEFAULT_DARKEST_SECRET "secret"
# define DEFAULT_IS_FULL false

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		bool 		_is_full;

	public:
		Contact( void );
		Contact( std::string first_name, std::string last_name,
				std::string nickname, std::string phone_number,
				std::string darkest_secret, bool state );
		~Contact( void );

		std::string getLastName( void ) const;
		std::string getFirstName( void ) const;
		std::string getNickname( void ) const;
		std::string getPhoneNumber( void ) const;
		std::string getDarkestSecret( void ) const;
		bool		getIsFull( void ) const;

		void		setFirstName( std::string first_name) ;
		void		setLastName( std::string last_name );
		void		setNickname( std::string nickname );
		void		setPhoneNumber( std::string phone_number );
		void		setDarkestSecret( std::string darkest_secret );
		void		setIsFull( bool state );

		void		displayContactShort( void );
		void		displayContactFull( void );
};

#endif //CONTACT_HPP