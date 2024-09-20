#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		int			phone_number;
	
	void	display_contact_short(void);
	void	display_contact_full(void);
};

#endif //CONTACT_HPP