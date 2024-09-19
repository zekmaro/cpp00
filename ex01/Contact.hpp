#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	public:
		char *first_name;
		char *last_name;
		char *nickname;
		char *phone_number;
		char *darkest_secret;
	
	void	display_contact(void);
};

#endif //CONTACT_HPP