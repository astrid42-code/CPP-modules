#ifndef TYPE_HPP
#define TYPE_HPP

# include <iostream>

// 3 fcts templates à implémenter
// pas de classe

template< typename T >
void	swap(T & a, T & b){ // a et b non const car modifiés
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T const & min(T const &x, T const &y){ // T représente un type quelconque (qu'on donnera dans le main par ex)
// mais ce doit tjrs être le même (ex int x et int y)
	return (x <= y ? x : y);
}

template< typename T >
T const & max(T const &x, T const &y){ // T représente un type quelconque (qu'on donnera dans le main par ex)
// mais ce doit tjrs être le même (ex int x et int y)
	return (x >= y ? x : y);
}

#endif

/*
template< typename T >
// template< typename T = float > // signifie que le type par défaut sera float

class Whatever{
	public:
		Whatever<T>( T const & content){

		}
		Whatever<T>( T const & list){
			// à faire fctionner comme dans une liste chainée
		}

	private:
		T * _content; // à l'exécution le T va devenir ce qu'on lui enverra (ex int)
		// * pas obligatoire (seulement si c'est une grosse struct et donc pour ménager ma mémoire)
		Whatever<T> *	_next;

		Whatever( void ); // si mis en private = je ne pourrai pas instancier par défaut
}
template< typename T >
std::ostream & operator<<(std::ostream & o, Type<T> const & type_op);
// operateur ostream recevant ma classe de type T

// dans le main pour savoir le type dans lequel instancier le template :
//Whatever<int> a(42); // ou tout type de mon choix pour créer mon instance
// pour instancier par défaut (ici en float):
// Whatever<> 
// si j'ajoute des valeurs non floats : Whatever<> w{12, 23} il y aura cast implicit en float

standard template library possède plein de fcts utilisables
*/