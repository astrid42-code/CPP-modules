#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <cstdlib>
# include <time.h>

class ValueNotFound : public std::exception{
	public:
		virtual const char * what() const throw(){
			return ("No occurrence finds");
		}
};
/*
template< typename T >
int	easyFind(T v1, int value){
	typename T::iterator it;

	// itérer du début à la fin du tableau pour voir si on trouve la value
	it = std::find(v1.begin(), v1.end(), value);
	// si it arrive à .end(), c'est qu'il n'y a pas d'occurence
	std::cout << *it << std::endl;
	if (it == v1.end())
		throw ValueNotFound();
	//sinon on retourne it (l'endroit où it est arrivé )
	return (*it); // pk retourne t on *it ? car it est un ptr donc on renvoie la valeur sur laquelle il pte et non l'adresse?
}
*/
//valeur renvoyée par mon iterator : la value ou l index???

template< typename T >
int	easyFind(T v1, int value){
	typename T::iterator it;
	typename T::iterator ite = v1.end();

	for (it = v1.begin(); it != ite; ++it){
		if (*it == value)
			return (*it);
	}
	if (it == v1.end())
		throw ValueNotFound();
	return (0);
}

#endif

// find : https://www.cplusplus.com/reference/algorithm/find/?kw=find
// containers : https://www.cplusplus.com/reference/stl/

