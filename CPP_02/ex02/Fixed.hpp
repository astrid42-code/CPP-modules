#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed{
	public:
		Fixed(void);
        Fixed(const int n);
        Fixed(const float f);
		Fixed(Fixed const & copy); // constructeur de copie
		~Fixed(void);

		Fixed & operator=(Fixed const & fixed_op);

/*		Fixed & operator>(Fixed const & fixed_op);
		Fixed & operator>=(Fixed const & fixed_op);
		Fixed & operator<(Fixed const & fixed_op);
		Fixed & operator<=(Fixed const & fixed_op);
		Fixed & operator==(Fixed const & fixed_op);
		Fixed & operator!=(Fixed const & fixed_op);
*/
		Fixed & operator+=(Fixed const & fixed_op); // fixedop - fixed ; et valeur stockée dans fixed
		Fixed & operator-=(Fixed const & fixed_op);
		Fixed & operator*=(Fixed const & fixed_op);
		Fixed & operator/=(Fixed const & fixed_op);

/*		Fixed & operator++(Fixed const & fixed_op);
		// Fixed & operator(Fixed const & fixed_op); //++i
		Fixed & operator--(Fixed const & fixed_op);
		// Fixed & operator=(Fixed const & fixed_op); //--i
*/
		int				getRawBits( void ) const; // retourne la valeur de l'int
		void			setRawBits( int const raw ); // initialise la valeur de l'int 
        float   		toFloat( void ) const; // convertit valeur en virgule fixe en nbr à virgule flottante
        int     		toInt( void ) const; // convertit valeur en virgule fixe en nbr entier
		static int		min(int &a, int &b); // retourne le plus petit
		static float	min(const float &a, const float &b); // idem
		static float	max(float &x, float &y); // // retourne le plus grand
		static float	max(const float &x, const float &y); // idem

	private:
		int					_value; // stocke la valeur du nbr en virgule fixe
		const static int	_bits = 8; // stocke le nbr de bits de la partie fractionnaire (valeur de 8 ???)
};
std::ostream & operator<<(std::ostream & o, Fixed const & fixed_op);

#endif

// opérateur d'assignation qui prend en param l'instance courante (non visible dans les parenthèses) 
// et une référence sur une instance constante de la classe courante
// Fixed &operator = c'est l'instance courante qui sera renvoyée (renvoie une référence à l'instance courante)
// [crée une instance temporaire immédiatement détruite juste après l'assignation]