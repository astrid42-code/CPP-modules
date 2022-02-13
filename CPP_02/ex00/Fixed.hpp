#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
	public:
		Fixed(void);
		Fixed(const Fixed& copy); // constructeur de copie
		Fixed &operator=(const Fixed& op);
		~Fixed(void);

	//	int		getRawBits( void ) const; // retourne la valeur de l'int
	//	void	setRawBits( int const raw ); // initialise la valeur de l'int 

	private:
	//	int					_value; // stocke la valeur du nbr en virgule fixe
	//	const static int	_bits = 8; // stocke le nbr de bits de la partie fractionnaire (valeur de 8 ???)
};

#endif