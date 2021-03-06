#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
	public:
		Fixed(void);
		Fixed(Fixed const & copy); // constructeur de copie
		~Fixed(void);

		Fixed &	operator=(Fixed const & fixed_op); 
		// opérateur d'assignation qui prend en param l'instance courante (non visible dans les parenthèses) 
		// et une référence sur une instance constante de la classe courante
		// Fixed &operator = c'est l'instance courante qui sera renvoyée (renvoie une référence à l'instance courante)
	
		int		getRawBits( void ) const; // retourne la valeur de l'int
		void	setRawBits( int const raw ); // initialise la valeur de l'int 

	private:
		int					_value; // stocke la valeur du nbr en virgule fixe
		const static int	_bits = 8; // stocke le nbr de bits de la partie fractionnaire (valeur de 8 ???)
};

#endif