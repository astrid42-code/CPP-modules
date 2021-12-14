#ifndef PHONEBOOK
#define PHONEBOOK

# include <iostream>
# include <string>

class Phonebook // ou Contacts et phonebook dans une autre classe?
{
	public:
	Phonebook();

	// methodes :
	// creer un tableau de contacts?
	// 

	private: // attributs non modifiables directement par l'utilisateur

	int	index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int	phone_number;
	std::string	darkest_secret;
};

#endif